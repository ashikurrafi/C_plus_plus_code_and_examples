#include <iostream>
using namespace std;
class rectangular
{
private:
    double length;
    double width;

public:
    rectangular(int a, int b)
    {
        length = a;
        width = b;
    }
    void print_area()
    {
        double area;
        area = length * width;
        cout << "Area = " << area << endl;
    }
    friend void print_area(rectangular r);
};
void print_area(rectangular r)
{
    double area;
    area = r.length * r.width;
    cout << "Area (Friend function) = " << area << endl;
}
int main()
{
    int x, y;
    cout << "Enter height : ";
    cin >> x;
    cout << "Enter width : ";
    cin >> y;
    rectangular a(x, y);
    a.print_area();
    print_area(a);
    return 0;
}