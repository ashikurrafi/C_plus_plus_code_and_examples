#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double area(double radius_of_circle)
{
    return M_PI * pow(radius_of_circle, 2);
}

double area(double length_of_rectangle, double width_of_rectangle)
{
    return length_of_rectangle * width_of_rectangle;
}

double area(double arm_of_triangle_1, double arm_of_triangle_2, double arm_of_triangle_3)
{
    if (arm_of_triangle_1 + arm_of_triangle_2 > arm_of_triangle_3 && arm_of_triangle_1 + arm_of_triangle_3 > arm_of_triangle_2 && arm_of_triangle_2 + arm_of_triangle_3 > arm_of_triangle_1)
    {
        double semi_perimeter;
        semi_perimeter = (arm_of_triangle_1 + arm_of_triangle_2 + arm_of_triangle_3) / 2;
        return sqrt(semi_perimeter * (semi_perimeter - arm_of_triangle_1) * (semi_perimeter - arm_of_triangle_2) * (semi_perimeter - arm_of_triangle_3));
    }
    else
    {
        return -1;
    }
}

int main()
{
    double circle;
    double length;
    double width;
    double arm_1_of_triangle;
    double arm_2_of_triangle;
    double arm_3_of_triangle;
    cout << "Enter radius of circle :";
    cin >> circle;
    cout << "Area of circle : " << area(circle) << endl;
    cout << "Enter height of rectangle : ";
    cin >> length;
    cout << "Enter width of rectangle : ";
    cin >> width;
    cout << "Area of rectangle : " << area(length, width) << endl;
    cout << "Enter length of side a of triangle : ";
    cin >> arm_1_of_triangle;
    cout << "Enter length of side b of triangle : ";
    cin >> arm_2_of_triangle;
    cout << "Enter length of side c of triangle : ";
    cin >> arm_3_of_triangle;
    double area_of_triangle = area(arm_1_of_triangle, arm_2_of_triangle, arm_3_of_triangle);
    if (area_of_triangle >= 0)
    {
        cout << "Area of triangle : " << area_of_triangle << endl;
    }
    else
    {
        cout << "Invalid triangle data" << endl;
    }
    return 0;
}
