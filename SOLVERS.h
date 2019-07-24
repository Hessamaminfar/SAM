#pragma once
#define _USE_MATH_DEFINES
#include <armadillo>
#include <cmath>
#include <mainwindow.h>



arma::rowvec Tridiag_Solver(arma::rowvec alpha, arma::rowvec C,arma::rowvec beta, arma::rowvec H) {

	int N= beta.n_cols;
	
	
	arma::mat RES = arma::zeros<arma::rowvec>(N);;
	
	for (int k = 1; k < N ; k++) {
		double mult = alpha(k) / C(k - 1);
		
		
		C(k) = C(k) - mult * beta(k-1);
		
		H(k) = H(k) - mult * H(k - 1);
		
	}
	
	
	
	
	
	RES(N - 1) = H(N - 1) / C(N - 1);
	
	for (int k = N-2; k >= 0; k = k - 1) {
		
	
		RES (k)=(H(k) - (beta(k) * RES(k+1)))/C(k);

		
	}
	
	

	

	return RES;
}


 


arma::rowvec solve_diffusion(arma::rowvec Cupwind, arma::rowvec x, arma::rowvec z, arma::rowvec K, arma::rowvec  uv, double Qsource) {

	
	
	double dx = x(2) - x(1);
	int Nx = x.n_cols;
	int Nz = z.n_cols;

	

	double Ksurf = K(0);
	double B = Qsource * (z(1) - z(0)) / Ksurf;
	

	
	arma::rowvec alpha = arma::zeros<arma::rowvec>(Nz);
	arma::rowvec C = arma::zeros<arma::rowvec>(Nz);
	arma::rowvec beta = arma::zeros<arma::rowvec>(Nz);
	arma::rowvec H = arma::zeros<arma::rowvec>(Nz);


	alpha(0) = 0; alpha(Nz - 1) = 1;
	
	C(0, 0) = 1; C(0, Nz - 1) = -1;
	beta(0, 0) = -1; beta(0, Nz - 1) = 0;
	H(0, 0) = B; H(0, Nz - 1) = 0;


	
	arma::rowvec A = arma::zeros<arma::rowvec>(Nz);

	A(0) = K(0) / (z(1) - z(0));

	
	
	
	for (int j = 1; j < Nz - 1; j++) {
		double zup = z(j + 1) - z(j);

		double zdif = z(j + 1) - z(j - 1);
		double a =

		A(j) = 2 * K(j) / zup;
	
		
		double delt = dx / uv(j) / zdif;
		
		alpha(j) = -A(j - 1)*delt;
		beta(j) = -A(j)*delt;
		C(j) = (1 - alpha(j) - beta(j));


		
	}

	for (int j = 1; j < Nz-1; j++) {

		H(j) = Cupwind(j);
	}
	

	
	arma::rowvec CONC=Tridiag_Solver(alpha,C,beta,H);
	

	CONC(0) = CONC(1) + B;
	CONC(Nz - 1) = CONC(Nz - 2);

	
	return CONC;




}

double Sat_properties(double T) {


	double logpsat = -0.58002206*pow(10, 4) / T + 0.13914993*pow(10, 1)- 0.48640239*pow(10,-1)*T+ 0.41764768*pow(10,-4)*pow(T,2) - 0.14452093*pow(10,-7)*pow(T,3)+ 0.65459673*pow(10,1)*log(T);


	double psat = exp(logpsat);
		
	double Csat = psat / (462 * T);
	return Csat;


}

double Keddy_ri(double zt, double zb, double Tempt, double Tempb, double velt,double velb) {


	double kappa = 0.4; double g = 9.81; double Lmon = 100;
	double delz = zt - zb; double To = (Tempt + Tempb)*0.5;
	double grad_temp = (Tempt - Tempb) / delz;
	double grad_vel = (velt - velb) / delz;
	double Ri = (g / To) * (grad_temp / (grad_vel*grad_vel));
	double fac = std::max(0.0, (1 - 5 * Ri));
	double lmix = kappa * std::min((zt + zb) / 2, Lmon);
	double Kz = grad_vel * lmix*lmix*(pow(fac, 0.5));


	return Kz;

}

double KT(double z, double ustar, double L_mon) {

	double K=0.35*ustar*z / (0.74 + 4.7*(z / L_mon));

	return K; 


}

double Kw(double z, double ustar, double L_mon) {

	double K = 0.35*ustar*z / (1 + 4.7*(z / L_mon));

	return K;


}


double uvel(double z,double ustar,double L_mon ,double z0, double dh) {
	
	double kappa = 0.4;
	double psi = (z - dh) / L_mon;
	double phi;
	if (psi > 0.0) {
		phi = -4.7*psi;
	}
	else {
		double x = pow((1 - 15 * psi), 0.25);
		phi = 2 * log((1 + x) / 2) + log((1 + x * x) / 2) - 2 * atan(x) + M_PI/2;
	}

	double w=ustar * (log((z - dh) / z0) - phi) / kappa;
	return w;

}


void Condense(double Cwater,double Tin, double &Tout,double &clq ,double &Cvap) {
	
	double  f;
	double dpsat;
	double df;
	double tmnew; 
	double Csat;
	double Tm;

	double errlimit = 1.0e-04; double iterlimit = 10; double delt = 0.1;
	double iter = 1; double err = 10;
	double Cliquid = 0.0;  Cvap = Cwater; Tout = Tin;
	Csat = Sat_properties(Tin);
	
	if (Cwater > Csat) {

		Cliquid = (Cwater - Csat);
		Tm = Tin;
		
		

		while ((err>errlimit) & (iter<iterlimit)) {
			f= Tm - Tin - Cliquid * 2400;
			
			
			dpsat = (Sat_properties(Tm + delt) - Sat_properties(Tm)) / delt;
			df = 1 + dpsat * 2400;

			tmnew = Tm - f / df;
			
			Csat = Sat_properties(tmnew);
			
			
			Cliquid = (Cwater - Csat);
			
			err = abs((tmnew - Tm) / Tm);
			Tm = tmnew; iter = iter + 1;
			

		}
		
		Tout = tmnew;
		
		
		Cvap = Csat;
		
		
	}
	clq=Cliquid;
	
}
void Diffusion_Solution(double zmix,double dist,int Nx, int Nz,Ui::MainWindow *UI, double z0,double gm,double Ts,double ustar,double L_mon,double RH,double Qvap,double QHeat, arma::mat &Cwater, arma::mat &Cliquid, arma::mat &TEMP,arma::rowvec &Z,arma::rowvec &X) {





	arma::mat vel = arma::zeros(Nx, Nz);
	TEMP = arma::zeros(Nx, Nz);
	Cwater = arma::zeros(Nx, Nz);
	Cliquid = arma::zeros(Nx, Nz);
	arma::mat ClQ = arma::zeros(Nx, Nz);
	arma::mat Cvap = arma::zeros(Nx, Nz);
	arma::mat TOUT = arma::zeros(Nx, Nz);


	arma::rowvec x = arma::linspace<arma::rowvec>(0, dist, Nx);
	
	arma::rowvec z = arma::logspace<arma::rowvec>(log10(z0), log10(zmix), Nz);
    Z=z;
    X=x;
    ;

	arma::mat K_T = arma::zeros(Nx, Nz);
	arma::mat K_W = arma::zeros(Nx, Nz);
	arma::mat K_Z = arma::zeros(Nx, Nz);

	double err = 1; double errlim = 1e-4;
	double iter = 1; double iterlimit = 50;

    UI->Basic_Progress->setRange(0, iterlimit-1);
	double clq = 0;
	for (int i = 0; i<Nx; i = i + 1) {
		
		for (int j = 0; j<Nz; j = j + 1) {
			
			double Tg= Ts + gm * z(j);
			TEMP(i, j) = Tg;
			
			vel(i, j) = uvel(z(j), ustar, L_mon, z0, 0.0);
			
			Cwater(i, j) = Sat_properties(Tg)*RH;
			
			
		}

		
	}

	while (err>errlim &(iter < iterlimit)) {

        UI->Basic_Progress->setValue(iter);

		for (int i = 1; i<Nx; i = i + 1) {
			for (int j = 0; j<Nz - 1; j = j + 1) {

				K_W(i, j) = Kw(z(j), ustar, L_mon);
				K_T(i, j) = KT(z(j), ustar, L_mon);
				K_Z(i, j) = Keddy_ri(z(j + 1), z(j), TEMP(i, j + 1), TEMP(i, j), vel(i, j + 1), vel(i, j));
				

			}
			
			Cwater.row(i)=solve_diffusion(Cwater.row(i - 1), x, z, K_Z.row(i), vel.row(i), Qvap);
			

			TEMP.row(i)=solve_diffusion(TEMP.row(i - 1), x, z, K_Z.row(i), vel.row(i), QHeat );
			

		}

		
		
		for (int i = 0; i<Nx; i = i + 1) {
			for (int j = 0; j<Nz; j = j + 1) {

				
				Condense(Cwater(i, j), TEMP(i, j), TOUT(i, j), ClQ(i,j), Cvap(i, j));
				
				
			}
			

		}
		err = arma::max(arma::max((ClQ - Cliquid))) / (arma::max(arma::max(ClQ)) + 1.0e-8);
		
		Cliquid = ClQ;
		
		TEMP = TOUT;

		iter = iter + 1;

	}
	
    UI->Basic_Progress->setValue(iterlimit-1);

}
