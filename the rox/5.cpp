/*5. Write a C++ program to implement 
a class called BankAccount that has private 
member variables for account number and balance. 
Include member functions 
to deposit and withdraw money from the account.*/

#include <bits/stdc++.h>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accountNum, double initialBalance) {
        accountNumber = accountNum;
        balance = initialBalance;
    }

    // Get
    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    //deposit 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful. New balance: $" << balance << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }
};

int main() {
    // Create a BankAccount 
    BankAccount myAccount(123456, 1000.0);

    // Display the account information
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;

    // Deposit money
    myAccount.deposit(500.0);

    // Withdraw money 
    myAccount.withdraw(200.0);

    // Display account balance
    cout << "Updated Balance: $" << myAccount.getBalance() << endl;

    return 0;
}