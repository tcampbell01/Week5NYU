#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int decimal = 0;
    int power = 0;
    int base = 2;
    int i;

    cout << "Enter decimal number: " << endl;
    cin >> decimal;

    while (pow(base, power) <= decimal)
    {
        power = power + 1;    
    }

    //subtract one to start adding place values
    power = power -1;

    
    cout << "The binary representation of " << decimal << " is ";
    cout << "1"; 
    
    decimal = decimal - (pow(base, power)); 
    
    power = power - 1;
   

        while (power > -1 ) {
            if (decimal >= (pow(base,power))) {
                cout << "1";
                decimal = decimal - (pow(base,power));
                power = power - 1;
              
        } 
            else {
                cout << "0";
                power = power - 1;
                

        }
    }
    cout << " " << endl;

    return 0;
}