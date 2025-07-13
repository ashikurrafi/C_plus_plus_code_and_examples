#include <iostream>
using namespace std;
class complex_number
{
public:
    complex_number(void);
    complex_number(double real_number, double imaginary_number);
    ~complex_number();
    complex_number operator+(complex_number);
    void display();

private:
    double x;
    double y;
};

complex_number::complex_number(void)
{
    x = 0;
    y = 0;
}

complex_number::complex_number(double real_number, double imaginary_number)
{
    x = real_number;
    y = imaginary_number;
}

complex_number::~complex_number()
{
}

complex_number complex_number::operator+(complex_number test)
{
    complex_number temp;
    temp.x = x + test.x;
    temp.y = y + test.y;
    return temp;
}

void complex_number::display()
{
    cout << x << "+" << y << "i" << endl;
}

int main()
{
    double a;
    double b;
    double c;
    double d;
    cout << "Enter 'x' of 1st number: ";
    cin >> a;
    cout << "Enter 'y' of 1st number: ";
    cin >> b;
    cout << "Enter 'x' of 2nd number: ";
    cin >> c;
    cout << "Enter 'y' of 2nd number: ";
    cin >> d;
    complex_number object_1;
    complex_number object_2;
    complex_number object_3;
    object_1 = complex_number(a, b);
    object_2 = complex_number(c, d);
    cout << "1st complex number : ";
    object_1.display();
    cout << "2nd complex number : ";
    object_2.display();
    object_3 = object_1 + object_2;
    cout << "Total complex number : ";
    object_3.display();
    return 0;
}