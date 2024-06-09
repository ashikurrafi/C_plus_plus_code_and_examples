#include <iostream>
using namespace std;
class factorial
{
public:
    factorial(void);
    factorial(int a);
    ~factorial();
    void set_data(int x);
    void factorial_calculation();
    void display();

private:
    unsigned long long fact = 1;
    int number;
};

factorial::factorial(void)
{
    number = 0;
}

factorial::factorial(int a)
{
    number = a;
}

factorial::~factorial()
{
}

void factorial::set_data(int x)
{
    number = x;
}

void factorial::factorial_calculation()
{
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
}

void factorial::display()
{
    cout << "Factorial is : " << fact;
}

int main()
{
    int data;
    cout << "Enter a number : ";
    cin >> data;
    factorial object;
    object.set_data(data);
    object.factorial_calculation();
    object.display();
    return 0;
}