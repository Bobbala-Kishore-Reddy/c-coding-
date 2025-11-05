#include <iostream>
using namespace std;

int main() {
    int units, choice;
    double total = 0;

    cout << "------ Electricity Bill Calculator ------" << endl;
    cout << "1. Domestic Connection" << endl;
    cout << "2. Commercial Connection" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter total units consumed: ";
    cin >> units;

    switch (choice) {
        case 1:
            if (units <= 100)
                total = units * 1.5;
            else if (units <= 200)
                total = 100 * 1.5 + (units - 100) * 2.5;
            else if (units <= 300)
                total = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4;
            else
                total = 100 * 1.5 + 100 * 2.5 + 100 * 4 + (units - 300) * 5;
            cout << "\nConnection Type: Domestic" << endl;
            break;

        case 2:
            if (units <= 100)
                total = units * 3.0;
            else if (units <= 200)
                total = 100 * 3.0 + (units - 100) * 4.5;
            else if (units <= 300)
                total = 100 * 3.0 + 100 * 4.5 + (units - 200) * 6.0;
            else
                total = 100 * 3.0 + 100 * 4.5 + 100 * 6.0 + (units - 300) * 7.5;
            cout << "\nConnection Type: Commercial" << endl;
            break;

        default:
            cout << "Invalid choice! Please select 1 or 2." << endl;
            return 0;
    }

    cout << "Total Units Consumed: " << units << endl;
    cout << "Total Bill Amount: ₹" << total << endl;

    return 0;
}
