#include <iostream>
using namespace std;

int main()
{

    cout << "While loop implementation below: " << endl;

    int n;
    int counter = 1;

    cout << "Please enter a positive integer: ";
    cin >> n;

    while (counter != n + 1)
    {

        // cout << counter << endl;

        cout << counter * 2 << endl;

        counter = counter + 1;
    }

    cout << "for loop implementation below: " << endl;

    for (counter = 1; counter <= n; counter++)
    {

        cout << counter * 2 << endl;
    }

    return 0;
}