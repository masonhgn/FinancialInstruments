#ifndef FINANCIALFUNCTIONS_CPP
#define FINANCIALFUNCTIONS_CPP
#include "FinancialFunctions.h"
#include <cmath>

	//cumulative distribution function
	double PDFunctions::cdf(double x) {
	    // constants
	    double a1 =  0.254829592,a2 = -0.284496736,a3 =  1.421413741,a4 = -1.453152027,a5 =  1.061405429;
	    double p  =  0.3275911;

	    // Save the sign of x
	    int sign = 1;
	    if (x < 0) sign = -1;
	    x = fabs(x)/sqrt(2.0);

	    // A&S formula 7.1.26
	    double t = 1.0/(1.0 + p*x);
	    double y = 1.0 - (((((a5*t + a4)*t) + a3)*t + a2)*t + a1)*t*exp(-x*x);

	    return 0.5*(1.0 + sign*y);
	}		

	//black scholes model
	double DifEQ::BlackScholes(double S, double K, double r, double sigma, double T) {
		double d1 = (log(S/K) + (r + (sigma*sigma)/2) * T) / sigma * sqrt(T);
		double d2 = d1 - (sigma * sqrt(T));

		double call = S * PDFunctions::cdf(d1) - K * exp(-r * T) * PDFunctions::cdf(d2);
		//double put = K * exp(-r * T) * PDFunctions::cdf(-d2) - S * PDFunctions::cdf(-d1);

		return call;
	}

#endif

