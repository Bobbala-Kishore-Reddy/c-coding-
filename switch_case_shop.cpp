#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    float total = 0;

    cout << "------ Welcome to Cafe Delight ------" << endl;
    cout << "1. Coffee - ₹50" << endl;
    cout << "2. Tea - ₹30" << endl;
    cout << "3. Sandwich - ₹70" << endl;
    cout << "4. Burger - ₹100" << endl;
    cout << "5. Exit" << endl;

    do {
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter quantity: ";
                cin >> qty;
                total += qty * 50;
                break;
            case 2:
                cout << "Enter quantity: ";
                cin >> qty;
                total += qty * 30;
                break;
            case 3:
                cout << "Enter quantity: ";
                cin >> qty;
                total += qty * 70;
                break;
            case 4:
                cout << "Enter quantity: ";
                cin >> qty;
                total += qty * 100;
                break;
            case 5:
                cout << "\nThank you for visiting!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select again." << endl;
        }
    } while (choice != 5);

    cout << "\nTotal Bill: ₹" << total << endl;

    return 0;
}
