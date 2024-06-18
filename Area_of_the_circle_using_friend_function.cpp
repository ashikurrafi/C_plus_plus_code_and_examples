#include <iostream>
using namespace std;

class circle
{
    double radius;

public:
    circle(double a)
    {
        radius = a;
    }
    friend void print_area(circle c);
};

void print_area(circle c)
{
    double area;
    area = 3.1416 * c.radius * c.radius;
    cout << "Area (Friend function) = " << area << endl;
}

int main()
{
    int data;
    cin>>data;
    circle a(data);
    print_area(a);
    return 0;
}