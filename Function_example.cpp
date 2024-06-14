#include <iostream>
using namespace std;
double sum(double x, double y)
{
    return x + y;
}
int main()
{
    double number_1, number_2, number_3;
    cout << "Enter a number : ";
    cin >> number_1;
    cout << "Enter another number : ";
    cin >> number_2;
    number_3 = sum(number_1, number_2);
    cout << "Total : " << number_3;
    return 0;
}