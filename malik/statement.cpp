#include <iostream>
#include <cmath>

using namespace std;


double calculateEMI(double principal, double annualRate, int tenureYears) {
    double monthlyRate = (annualRate / 12) / 100;
    int tenureMonths = tenureYears * 12;
    double EMI = (principal * monthlyRate * pow(1 + monthlyRate, tenureMonths)) / (pow(1 + monthlyRate, tenureMonths) - 1);
    return EMI;
}

double calculateTotalInterest(double principal, double annualRate, int tenureYears) {
    double EMI = calculateEMI(principal, annualRate, tenureYears);
    int tenureMonths = tenureYears * 12;
    double totalPayment = EMI * tenureMonths;
    double totalInterest = totalPayment - principal;
    return totalInterest;
}

int main() {
    double principal;
    double annualRateA, annualRateB;
    int tenureYearsA, tenureYearsB;

    
    cout << "Enter the loan amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate for Bank A: ";
    cin >> annualRateA;
    cout << "Enter the tenure (in years) for Bank A: ";
    cin >> tenureYearsA;

    
    cout << "Enter the annual interest rate for Bank B: ";
    cin >> annualRateB;
    cout << "Enter the tenure (in years) for Bank B: ";
    cin >> tenureYearsB;

   
    double totalInterestA = calculateTotalInterest(principal, annualRateA, tenureYearsA);
    cout << "Total interest paid for Bank A: " << totalInterestA << endl;

   
    double totalInterestB = calculateTotalInterest(principal, annualRateB, tenureYearsB);
    cout << "Total interest paid for Bank B: " << totalInterestB << endl;

   
    if (totalInterestA < totalInterestB) {
        cout << "Bank A offers a better deal." << endl;
    } else if (totalInterestB < totalInterestA) {
        cout << "Bank B offers a better deal." << endl;
    } else {
        cout << "Both banks offer the same deal." << endl;
    }

    return 0;
}
