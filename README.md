# Financial Instruments and Models Implementation

This is a simple financial command line tool that currently has support for these options:
1. Black Scholes Model (Theoretical Pricing Model)




# Theoretical Pricing Models
## Black Scholes Model

To price a call option C, we have:

![image](https://user-images.githubusercontent.com/73012906/206798119-3a170e4f-4332-47d5-a79b-e67bd59ba6b9.png)


In this formula,
C(S<sub>0</sub>,t) = the price of our call option AKA the final output

S<sub>0</sub> = the price of the underlying security

K = the strike price

(T - t) = time to expiration

r = risk-free interest rate

$\sigma$ = the volatility of the underlying security

N = our cdf function
