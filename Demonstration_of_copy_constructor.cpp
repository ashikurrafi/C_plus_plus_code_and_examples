#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Point(const Point &p2)
    {
        x = p2.x;
        y = p2.y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    int x;
    int y;
    cout << "Enter a number : ";
    cin >> x;
    cout << "Enter another number : ";
    cin >> y;
    Point p1(x, y);
    Point p2 = p1;
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
    return 0;
}