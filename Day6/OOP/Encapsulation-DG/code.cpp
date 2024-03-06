#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    void setAccountNumber(const string& accNum) {
        accountNumber = accNum;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "So du khong du!." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.setAccountNumber("1234567890");
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    cout << "So du trong TK: " << myAccount.getBalance() << endl;

    return 0;
}