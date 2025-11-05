#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000.0, amount;

    cout << "------ Welcome to ATM ------" << endl;

    do {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: ₹" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ₹";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully." << endl;
                } else {
                    cout << "Invalid deposit amount." << endl;
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: ₹";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance." << endl;
                } else {
                    cout << "Invalid withdrawal amount." << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
