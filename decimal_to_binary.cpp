//Divde by 2 and keep track of the remainders. 6/2 = 3 R 0, 3/2 = 1 R 1, 1/2 = 0 R 1. Then go backwards: 110 

#include <string>
#include <iostream>
using namespace std;

int main () {

    int input_number;
    string binString = ""; //output binary string

    //to_string(1) --> "1"
    //to_string(0) --> "0"
    // you can use string concatenation (+) operator
    //"1" + "0" = "10"

    cout << "Please enter a positive number:" << endl;
    cin >> input_number;

    while(input_number > 0) {
        int remainder = input_number % 2;
        binString = binString + to_string(remainder);
        input_number = input_number / 2;
    }

    //then flip the number (loop through?)

    cout << binString << endl;

}