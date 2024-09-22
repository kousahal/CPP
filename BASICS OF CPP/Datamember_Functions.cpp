#include <iostream>
using namespace std;

class BankAccount {
    // Data members (attributes)
    private:
        string accountHolderName;
        int accountNumber;
        double balance;

    // Constructor
    public:
        BankAccount(string name, int accNum, double initialBalance) {
            accountHolderName = name;
            accountNumber = accNum;
            balance = initialBalance;
            cout << "Account created for " << accountHolderName << " with account number " << accountNumber << endl;
        }

        // Member function to deposit money
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Deposit amount must be positive." << endl;
            }
        }

        // Member function to withdraw money
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance or invalid amount!" << endl;
            }
        }

        // Member function to display the balance
        void displayBalance() const {
            cout << "Current balance: " << balance << endl;
        }

        // Destructor
        ~BankAccount() {
            cout << "Account closed for " << accountHolderName << endl;
        }
};

int main() {
    // Create a BankAccount object
    BankAccount account1("Koushal Yadav", 1234567, 5000.0);
    
    // Perform operations
    account1.displayBalance();
    account1.deposit(1500.0);
    account1.displayBalance();
    account1.withdraw(2000.0);
    account1.displayBalance();
    
    // Destructor is called automatically when the object goes out of scope
    return 0;
}

