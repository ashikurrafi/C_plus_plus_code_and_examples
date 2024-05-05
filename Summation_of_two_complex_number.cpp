#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << "Total : " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    int a;
    int b;
    int c;
    int d;
    cout << "Enter x : ";
    cin >> a;
    cout << "Enter y : ";
    cin >> b;
    cout << "Enter x : ";
    cin >> c;
    cout << "Enter x : ";
    cin >> d;
    complex c1(a, b), c2(c, d);
    complex c3 = c1 + c2;
    c3.print();
}