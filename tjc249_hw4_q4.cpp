#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {


    cout << "Section A below: " << endl;

    int length;
    int sequence;
    int i;
    double geometric_mean;
    int base = 1;

    cout << "Please enter the length of the sequence: " << endl;
    cin >> length;

    cout << "Please enter your sequence: " << endl;

    for (i = 1; i <= length; i ++) {
        cin >> sequence;
        base = base * sequence;
        
    }


    double root = 1.0/(double)length;


     geometric_mean = pow(base, root);

     std::cout << std::fixed << std::setprecision(4) << "The geometric root is: " << geometric_mean << endl;


     cout << "Section B below: " << endl;

    int sequence = 0;
    double geometric_mean;
    int base = 1;
    int counter = 0;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:" << endl;
   


    while (sequence != -1) {
        cin >> sequence;
        
        if (sequence != -1) {
            counter += 1;
            base = base * sequence;
        }
        continue;
        
    }


    double root = 1.0/(double)counter;


     geometric_mean = pow(base, root);

     std::cout << std::fixed << std::setprecision(4) << "The geometric root is: " << geometric_mean << endl;


    return 0;

}