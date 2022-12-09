#ifndef FINANCIALFUNCTIONS_H
#define FINANCIALFUNCTIONS_H
#include <cmath>

namespace PDFunctions {
	//cumulative distribution function
	double cdf(double x);		
}

namespace DifEQ {

	//black scholes model
	double BlackScholes(double S, double K, double r, double sigma, double T);
}

#endif