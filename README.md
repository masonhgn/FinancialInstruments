# FinancialInstruments

This is a simple financial command line tool that currently has support for these options:
1. Black Scholes Model (Theoretical Pricing Model)




#Theoretical Pricing Models
## Black Scholes Model

To price a call option C, we have:
\begin{equation}
	\frac{\partial \mathrm C}{ \partial \mathrm t } + \frac{1}{2}\sigma^{2} \mathrm S^{2} \frac{\partial^{2} \mathrm C}{\partial \mathrm C^2}
	+ \mathrm r \mathrm S \frac{\partial \mathrm C}{\partial \mathrm S}\ =
	\mathrm r \mathrm C 
	\label{eq:1}
\end{equation}

In this formula,
C = the price of our call option AKA the final output
S = the price of the underlying security
K = the strike price
t = time to expiration
r = risk-free interest rate
N = our cdf function
