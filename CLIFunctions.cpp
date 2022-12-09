#ifndef CLIFUNCTIONS_CPP
#define CLIFUNCTIONS_CPP
#include "CLIFunctions.h"
#include "FinancialFunctions.h"
#include <iostream>

void CLIMenuFunctions::MenuOptions() {
	char option;
	bool EXIT_CONDITION;


	while (true) {
		std::cout << "Please enter an option...\n";
		std::cout << "[1] --- Black Scholes Model\n";
		std::cout << "[2] --- Exit\n";
		std::cin >> option;

		switch (option) {
			case '1':
				double spotPrice, strikePrice, riskFreeInterestRate, volatility, timeToMaturity, bsModel;
				std::cout << "Enter the information for the underlying security in a space separated line like this:\n";
				std::cout << "[spot price]  [strike price]  [risk free interest rate]  [volatility]  [time to maturity]\n";
				std::cin >> spotPrice >> strikePrice >> riskFreeInterestRate >> volatility >> timeToMaturity;
				bsModel = DifEQ::BlackScholes(spotPrice, strikePrice, riskFreeInterestRate, volatility, timeToMaturity);
				std::cout << "Call Price: " << bsModel << std::endl;
				break;
			case '2':
				std::cout << "Goodbye.\n";
				EXIT_CONDITION = true;
				break;
		}

		if (EXIT_CONDITION) break;
	}
}


#endif