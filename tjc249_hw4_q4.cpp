#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

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

    // cout << "base = " << base;

    double root = 1.0/(double)length;

    cout << "The root is: " << root << endl;

     geometric_mean = pow(base, root);

     std::cout << std::fixed << std::setprecision(4) << "The geometric root is: " << geometric_mean << endl;


    return 0;

}