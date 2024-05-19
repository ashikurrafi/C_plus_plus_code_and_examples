#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double a;
    double b;
    double c;
    double x_1;
    double x_2;
    double discriminant;
    double real_number;
    double imaginary_number;
    cout << "Enter value of 'a' :";
    cin >> a;
    cout << "Enter value of 'b' : ";
    cin >> b;
    cout << "Enter value of 'c' : ";
    cin >> c;
    discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant > 0)
    {
        x_1 = (-b + sqrt(discriminant)) / (2 * a);
        x_2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are different and real :" << endl;
        cout << "X1 = " << x_1 << endl
             << "X2 = " << x_2;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are same and real : " << endl;
        x_1 = -b / (2 * a);
        cout << "X1 = X2 = " << x_1;
    }
    else
    {
        real_number = -b / (2 * a);
        imaginary_number = sqrt(-discriminant) / (2 * a);
        cout << "Roots are different and complex : " << endl;
        cout << "X1 = " << real_number << "+" << imaginary_number << "i" << endl;
        cout << "X1 = " << real_number << "-" << imaginary_number << "i" << endl;
    }
    return 0;
}