# FinancialInstruments

This is a simple financial command line tool that currently has support for these options:
1. Black Scholes Model (Theoretical Pricing Model)




#Theoretical Pricing Models
## Black Scholes Model

To price a call option C, we have:
![image](https://user-images.githubusercontent.com/73012906/206797035-5b0565b2-e235-4335-8b28-65f3f263d574.png)
where d1 = ![image](https://user-images.githubusercontent.com/73012906/206797080-d498b517-1c05-4a33-a9e7-365365836f9c.png)
and d2 = ![image](https://user-images.githubusercontent.com/73012906/206797102-01fb2cb6-b418-4f4b-91f7-baf732c02731.png)

In this formula,
C = the price of our call option AKA the final output
S = the price of the underlying security
K = the strike price
t = time to expiration
r = risk-free interest rate
N = our cdf function
