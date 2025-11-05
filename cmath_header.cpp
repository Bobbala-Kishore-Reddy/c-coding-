#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Power (x^y): " << pow(x, y) << endl;
    cout << "Square root of x: " << sqrt(x) << endl;
    cout << "Absolute value of x: " << abs(x) << endl;
    cout << "Ceil of x: " << ceil(x) << endl;
    cout << "Floor of x: " << floor(x) << endl;
    cout << "Round of x: " << round(x) << endl;
    cout << "Sine of x: " << sin(x) << endl;
    cout << "Cosine of x: " << cos(x) << endl;
    cout << "Tangent of x: " << tan(x) << endl;

    return 0;
}
