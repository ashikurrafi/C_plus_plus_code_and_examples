#include <iostream>
using namespace std;

int main()
{
    double number;
    double factorial = 1;
    cout << "Enter a positive integer : ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial of " << number << " is " << factorial;
    return 0;
}