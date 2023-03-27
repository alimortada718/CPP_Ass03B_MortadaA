#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {
    // Defining constants for hourly rates and tax rates
    const double Regular_Rate = 40.00;
    const double Overtime_Rate = 60.00;
    const double State_Tax_Rate = 0.20;
    const double Education_Tax_Rate = 0.02;
    const double Social_Security_Rate = 0.04;
    const double Medicare_Rate = 0.04;

    // Defining variables for employee name and hours worked
    string employeeName;
    double regularHours, overtimeHours;

    // Defining variables for gross and net Income
    double regularPay, overtimePay, TotalgrossPay, stateTax, educationTax, socialSecurity, Medicare, netIncome;

    // Defining variable to track whether to continue processing employees
    char continueProcessing = 'Y';

    // Loop through the employee's information until user chooses to exit
    while (continueProcessing == 'Y') {
        // Get employee name and hours worked
        cout << "Enter employee name: ";
        getline(cin, employeeName);
        cout << "Enter regular hours worked: ";
        cin >> regularHours;
        cout << "Enter overtime hours worked: ";
        cin >> overtimeHours;

        // Calculate regular and overtime pay
        regularPay = regularHours * Regular_Rate;
        overtimePay = overtimeHours * Overtime_Rate;

        // Calculate gross pay and taxes
        TotalgrossPay = regularPay + overtimePay;
        stateTax = TotalgrossPay * State_Tax_Rate;
        educationTax = TotalgrossPay * Education_Tax_Rate;
        socialSecurity = TotalgrossPay * Social_Security_Rate;
        Medicare = TotalgrossPay * Medicare_Rate;

        // Calculate net Income
        netIncome = TotalgrossPay - stateTax - educationTax - socialSecurity - Medicare;

        // Print pay advice for employee
        cout << endl << "Pay Advice for " << employeeName << endl;
        cout << "Total Gross pay: $" << TotalgrossPay << endl;
        cout << "State tax: $" << stateTax << endl;
        cout << "Education tax: $" << educationTax << endl;
        cout << "Social security: $" << socialSecurity << endl;
        cout << "Medicare: $" << Medicare << endl;
        cout << "Net Income: $" << netIncome << endl;

        // Ask user whether to continue processing employees
        cout << endl << "Do you want to continue? (Y/N): ";
        cin >> continueProcessing;

    }

    return 0;
}

