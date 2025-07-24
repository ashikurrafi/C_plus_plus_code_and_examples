#include <iostream>
using namespace std;
class complex
{
    float x, y;

public:
    complex()
    {
        x = 0;
        y = 0;
    }
    complex(float real, float image)
    {
        x = real;
        y = image;
    }
    ~complex()
    {
    }
    complex operator+(complex);
    void display();
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}
void complex::display()
{
    cout << x << "+i" << y << endl;
}
int main()
{
    int a, b, d, e;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    cout << "Enter 3rd number : ";
    cin >> d;
    cout << "Enter 4th number : ";
    cin >> e;
    complex c1, c2, c3;
    c1 = complex(a, b);
    c2 = complex(d, e);
    c3 = c1 + c2;
    cout << "C1 = ";
    c1.display();
    cout << "C2 = ";
    c2.display();
    cout << "C3 = ";
    c3.display();
    return 0;
}