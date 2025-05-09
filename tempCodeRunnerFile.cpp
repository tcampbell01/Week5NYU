#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double add, subtract, multiply, divide, mod;
    int int1, int2;

    cout << "Please enter two positive integers, separated by a space: ";
    cin >> int1 >> int2;

    add = int1 + int2;
    cout << int1 << " + " << int2 << " = " << add << endl;

    subtract = int1 - int2;
    cout << int1 << " - " << int2 << " = " << subtract << endl;

    multiply = int1 * int2;
    cout << int1 << " * " << int2 << " = " << multiply << endl;

    divide = double(int1) / int2;
    cout << int1 << " / " << int2 << " = " << divide << endl;

    mod = int1 % int2;
    cout << int1 << " mod " << int2 << " = " << mod << endl;

    return 0;
}