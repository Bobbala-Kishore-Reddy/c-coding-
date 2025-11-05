#include <iostream>
using namespace std;

//To check whether a number is postive or negative .

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "The number is positive." << endl;

    if (num < 0)
        cout << "The number is negative." << endl;

    if (num == 0)
        cout << "The number is zero." << endl;

    return 0;
}
