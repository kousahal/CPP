#include <iostream>
using namespace std;
int next_operation;

float account_balance = 0.0;


void atm_service() {
    cout << "Available Options in ATM" << endl;
    cout << "1. Deposit Funds" << endl;
    cout << "2. Withdraw Funds" << endl;
    cout << "3. Check Balance" << endl;
    cout << "\n";

    int choice;
    cout << "Select an option: ";
    cin >> choice;

    float withdraw_amt;
    float deposit_amt;

    switch(choice) {

        case 1:
            cout << "\nEnter the amount to deposit: ";
            cin >> deposit_amt;
            account_balance += deposit_amt;

            cout << "Current balance: Rs. " << account_balance << ". Thank you for depositing!" << endl;
            cout << "Would you like another operation?\nPress 1 for 'yes' or 2 for 'no':\n" << endl;
            cout << "Your choice: ";
            cin >> next_operation;

            if (next_operation == 1) {
                atm_service();
            }
            break;

        case 2:
            cout << "\nEnter the amount to withdraw: ";
            cin >> withdraw_amt;

            if (withdraw_amt > account_balance) {
                cout << "Insufficient balance! Please deposit money first." << endl;
                cout << "Would you like another operation?\nPress 1 for 'yes' or 2 for 'no':\n" << endl;
                cout << "Your choice: ";
                cin >> next_operation;

                if (next_operation == 1) {
                    atm_service();
                }
            } else {
                account_balance -= withdraw_amt;
                cout << "You've withdrawn Rs. " << withdraw_amt << ". Remaining balance: Rs. " << account_balance << endl;
                cout << "Would you like another operation?\nPress 1 for 'yes' or 2 for 'no':\n" << endl;
                cout << "Your choice: ";
                cin >> next_operation;

                if (next_operation == 1) {
                    atm_service();
                }
            }
            break;

     
        case 3:
            cout << "Your current balance is: Rs. " << account_balance << endl;
            cout << "Would you like another operation?\nPress 1 for 'yes' or 2 for 'no':\n" << endl;
            cout << "Your choice: ";
            cin >> next_operation;

            if (next_operation == 1) {
                atm_service();
            }
            break;

        default:
            cout << "Invalid option selected!" << endl;
            cout << "Returning to main menu...\n" << endl;
            atm_service();
    }
}

int main() {
    atm_service();
    cout << "Thank you for using our ATM service!";
    return 0;
}
