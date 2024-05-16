#include <iostream>
using namespace std;
int fibonacci(int data)
{
    if ((data == 1) || (data == 0))
    {
        return data;
    }
    else
    {
        return fibonacci(data - 1) + fibonacci(data - 2);
    }
}

int main()
{
    int data;
    cout << "Enter a number to calculate Fibonacci series : ";
    cin >> data;
    cout << "Fibonacci series : ";
    int i = 0;
    while (i < data)
    {
        cout << " " << fibonacci(i);
        i++;
    }
    return 0;
}