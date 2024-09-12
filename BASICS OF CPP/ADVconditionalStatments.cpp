#include <iostream>
using namespace std;

int main() {

    int age;
    double income;
    int creditScore;
    char employmentStatus;

   
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your annual income in INR: ";
    cin >> income;
    cout << "Enter your credit score: ";
    cin >> creditScore;
    cout << "Are you employed? (y/n): ";
    cin >> employmentStatus;

 
    if (age >= 21 && age <= 65) {
        if (income >= 20000) {
            if (creditScore >= 650) {
                if (employmentStatus == 'y' || employmentStatus == 'Y') {
                   
                    cout << "You are eligible for a loan." << endl;

                    
                    double interestRate;

                    if (creditScore > 800) {
                        interestRate = 5.5;
                    } else if (creditScore >= 750) {
                        interestRate = 6.5;
                    } else if (creditScore >= 700) {
                        interestRate = 7.5;
                    } else {
                        interestRate = 8.5;
                    }

                   
                    switch ((int)(income / 10000)) {
                        case 2:
                        case 3:
                            interestRate += 1.0; // Slight increase for lower-income
                            break;
                        case 4:
                        case 5:
                            interestRate += 0.5; // Moderate income bracket
                            break;
                        default:
                            if (income > 50000)
                                interestRate -= 0.5; // Discount for higher-income
                    }

                    cout << "Your interest rate is: " << interestRate << "%" << endl;
                } else {
                    cout << "Loan approval requires employment status." << endl;
                }
            } else {
                cout << "Credit score too low. Minimum score required: 650." << endl;
            }
        } else {
            cout << "Income below required threshold. Minimum income: $20,000." << endl;
        }
    } else {
        cout << "Age not within eligible range. Must be between 21 and 65." << endl;
    }

    return 0;
}
