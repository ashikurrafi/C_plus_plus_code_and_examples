#include <iostream>
#include <cmath>
using namespace std;

double factorial(int number)
{
    double summation = 1;
    for (int i = 1; i <= number; i++)
    {
        summation *= i;
    }
    return (summation);
}

double calculation(double number, double temp_result)
{
    int sign = 1;
    double temp = 0;
    for (int i = 1; i <= temp_result; i += 2)
    {
        temp += sign * (pow(number, i) / factorial(i));
        sign *= -1;
    }
    return (temp);
}

int main()
{
    int x, last_point;
    double result;
    cout << "Enter value of x : ";
    cin >> x;
    cout << "Enter number (Have to be an odd number) : ";
    cin >> last_point;
    result = calculation(x, last_point);
    cout << result;
    return 0;
}