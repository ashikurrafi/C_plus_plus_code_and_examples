#include <iostream>
using namespace std;

double factorial(double number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    double number;
    cout << "Enter a positive integer value : ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number);
    return 0;
}