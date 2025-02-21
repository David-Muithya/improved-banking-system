#include <iostream>
#include <string>
#include <limits>
using namespace std;

// BankAccount class for representing a user's bank account
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor to initialize the account holder and balance
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    // Deposit function to add money to the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw function to subtract money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            cout << "Invalid withdrawal amount.\n";
        }
    }

    // Display current balance
    void displayBalance() const {
        cout << "Current balance: $" << balance << "\n";
    }

    // Display account holder's name
    void displayAccountHolder() const {
        cout << "Account Holder: " << accountHolder << "\n";
    }
};

// Function to safely read a double value
double readDouble() {
    double value;
    while (true) {
        cin >> value;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return value;
        }
    }
}

int main() {
    string name;
    double initialDeposit;

    cout << "Enter account holder's name: ";
    getline(cin, name);
    cout << "Enter initial deposit: $";
    initialDeposit = readDouble();

    // Create a bank account object
    BankAccount account(name, initialDeposit);

    int choice;
    do {
        cout << "\nBanking System Menu\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.displayAccountHolder();
                account.displayBalance();
                break;
            case 2: {
                double depositAmount;
                cout << "Enter deposit amount: $";
                depositAmount = readDouble();
                account.deposit(depositAmount);
                break;
            }
            case 3: {
                double withdrawalAmount;
                cout << "Enter withdrawal amount: $";
                withdrawalAmount = readDouble();
                account.withdraw(withdrawalAmount);
                break;
            }
            case 4:
                cout << "Exiting the banking system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
