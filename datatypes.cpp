#include <iostream>
#include <string>
using namespace std;

int main() {
    int num = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char grade = 'A';
    bool isPassed = true;
    string message = "hello world ";

    cout << "C++ Data Types Example  :- " << endl;
    cout << "Integer value: " << num << endl;
    cout << "Float value: " << price << endl;
    cout << "Double value: " << pi << endl;
    cout << "Character value: " << grade << endl;
    cout << "Boolean value: " << isPassed << endl;
    cout << "String value: " << message << endl;

    cout << "\nSizes of Data Types (in Bytes) :-" << endl;
    cout << "Size of int: " << sizeof(num) << " bytes" << endl;
    cout << "Size of float: " << sizeof(price) << " bytes" << endl;
    cout << "Size of double: " << sizeof(pi) << " bytes" << endl;
    cout << "Size of char: " << sizeof(grade) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(isPassed) << " bytes" << endl;
    cout << "Size of string object: " << sizeof(message) << " bytes" << endl;

    return 0;
}
