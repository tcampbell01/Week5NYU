#include <iostream>
#include <string>
using namespace std;

int main() {

    int decimal;
    int original_decimal;

    string binString = ""; //output binary string

   
    cout << "Enter decimal number: " << endl;
    cin >> original_decimal;

    decimal = original_decimal;

    while(decimal > 0) {
        int remainder = decimal % 2;
        binString = binString + to_string(remainder);
        decimal = decimal / 2;
    };


    reverse(binString.begin(), binString.end());

    cout << "The binary representation of " << original_decimal <<  " is " << binString << endl;

    return 0;


}