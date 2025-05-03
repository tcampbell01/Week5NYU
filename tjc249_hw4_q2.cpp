#include <iostream>
using namespace std;

int main()
{

    const int M = 1000;
    const int D = 500;
    const int C = 100;
    const int L = 50;
    const int X = 10;
    const int V = 5;
    const int I = 1;
    int i;

    int chosen_decimal;

    cout << "Enter decimal number: " << endl;
    cin >> chosen_decimal;

    cout << chosen_decimal << " is ";

    while (chosen_decimal >= 1000)
    {

        cout << "M";
        chosen_decimal = chosen_decimal - 1000;
    }

    if (chosen_decimal >= 500)
    {
        cout << "D";
        chosen_decimal = chosen_decimal - 500;
    }

    for (i = 1; i <= 4; i++)
    {
        if (chosen_decimal > 100)
        {
            cout << "C";
            chosen_decimal = chosen_decimal - 100;
        }
        else
        {
            continue;
        }
    }

    if (chosen_decimal >= 50)
    {
        cout << "L";
        chosen_decimal = chosen_decimal - 50;
    }

    for (i = 1; i <= 4; i++)
    {
        if (chosen_decimal > 10)
        {
            cout << "X";
            chosen_decimal = chosen_decimal - 10;
        }
        else
        {
            continue;
        }
    }

    if (chosen_decimal >= 5)
    {
        cout << "V";
        chosen_decimal = chosen_decimal - 5;
    }

    for (i = 1; i <= 4; i++)
    {
        if (chosen_decimal >= 1)
        {
            cout << "I";
            chosen_decimal = chosen_decimal - 1;
        }
        else
        {
            continue;
        }
    }
    cout << " " << endl;

    return 0;
}
