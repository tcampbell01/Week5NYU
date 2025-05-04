#include <iostream>
using namespace std;

int main()
{

    int n;
    int number_of_lines;
    int number_of_stars_left;
    int number_of_stars_right;
    int number_of_spaces_right = 0;
    int number_of_spaces_left = 0;
    char middle_star = '*';

    // take in an integer from the user
    cout << "Please enter a positive integer: " << endl;
    cin >> n;


    number_of_lines = 2 * n;

    
    number_of_stars_left = (number_of_lines - 2) / 2;
    number_of_stars_right = (number_of_lines - 2) / 2;

    while (number_of_stars_left != 0)
    {

        std::cout << std::string(number_of_spaces_left, ' ');
        std::cout << std::string(number_of_stars_left, '*');

        cout << middle_star;

        std::cout << std::string(number_of_stars_right, '*');
        std::cout << std::string(number_of_spaces_right, ' ') << std::endl;

        number_of_stars_left = number_of_stars_left - 1;
        number_of_stars_right = number_of_stars_right - 1;
        number_of_spaces_left = number_of_spaces_left + 1;
        number_of_spaces_right = number_of_spaces_right + 1;
    }


    std::cout << std::string(number_of_spaces_left, ' ');
    cout << middle_star;
    std::cout << std::string(number_of_spaces_right, ' ') << std::endl;

    while (number_of_stars_left != (number_of_lines - 2) / 2)
    {

        number_of_stars_left = number_of_stars_left + 1;
        number_of_stars_right = number_of_stars_right + 1;
        number_of_spaces_left = number_of_spaces_left - 1;
        number_of_spaces_right = number_of_spaces_right - 1;

        std::cout << std::string(number_of_spaces_left, ' ');
        std::cout << std::string(number_of_stars_left, '*');

        cout << middle_star;
        
        std::cout << std::string(number_of_stars_right, '*');
        std::cout << std::string(number_of_spaces_right, ' ') << std::endl;
    }

    return 0;
}
