#include <iostream>
using namespace std;
void sum(int *x, int *y)
{
    int s;
    s = *x + *y;
    cout << "Total : " << s;
}

int main()
{
    int number_1, number_2;
    cout << "Enter 1st number : ";
    cin >> number_1;
    cout << "Enter 2nd number : ";
    cin >> number_2;
    sum(&number_1, &number_2);
    return 0;
}