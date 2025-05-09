#include <iostream>
using namespace std;

int main()
{
    int even = 0;
    int odd = 0;
    int input;
    int i;
    int remainder;

    cout << "Please enter an integer: " << endl;
    cin >> input;

    for (i = 1; i < input; i++)
    {
        int temp = i; 
        even = 0;     
        odd = 0;      

        // Count even and odd digits
        while (temp != 0)
        {
            remainder = temp % 10; 
            if (remainder % 2 == 0)
            {
                even = even + 1;
            }
            else
            {
                odd = odd + 1;
            }
            temp = temp / 10; 
        }

       
        if (even > odd)
        {
            cout << i << endl;
        }
    }

    return 0;
}