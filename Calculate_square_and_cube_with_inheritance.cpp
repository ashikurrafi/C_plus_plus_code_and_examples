#include <iostream>
#include <cmath>
using namespace std;
class number
{
public:
    number(void);
    number(double a);
    void set_data(double n);
    ~number();

protected:
    double num;
};

number::number(void)
{
    num = 0;
}

number::number(double a)
{
    num = a;
}

void number::set_data(double n)
{
    num = n;
}

number::~number()
{
}

class square : public number
{
public:
    double square_calculation();
};

double square::square_calculation()
{
    return pow(num, 2);
}

class cube : public number
{
public:
    double cube_calculation();
};

double cube::cube_calculation()
{
    return num * num * num;
}

int main()
{
    number object;
    square object_1;
    cube object_2;
    double temp;
    cout << "Enter a number : ";
    cin >> temp;
    object.set_data(temp);
    object_1.set_data(temp);
    object_2.set_data(temp);
    cout << "Square value : ";
    cout << object_1.square_calculation() << endl;
    cout << "Cubic value : ";
    cout << object_2.cube_calculation() << endl;
    return 0;
}