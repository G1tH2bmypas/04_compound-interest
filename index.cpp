#include <iostream>
#include <string>
#include <cmath>

long compoundInterest(long startDeposit, double annualRate, int annualAmount, int interestPeriod) {
//	double division = annualRate / annualAmount;
//	double sum = division + 1;
//	int dob = annualAmount * interestPeriod;
//	double degree = pow(sum, dob);
//	double A = startDeposit * degree;
	return round(startDeposit * (pow (1 + annualRate / annualAmount, annualAmount * interestPeriod)));
}
