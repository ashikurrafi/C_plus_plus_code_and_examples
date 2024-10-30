#include <iostream>
using namespace std;

class one
{
public:
    int x;
    int y;
    void get_data()
    {
        cout << "Enter value of x : ";
        cin >> x;
        cout << "Enter value of y : ";
        cin >> y;
    }
};

class two : public one
{
public:
    void product()
    {
        cout << "Product : " << x * y << endl;
    }
};

class three : public one
{
public:
    void sum()
    {
        cout << "Sum : " << x + y << endl;
    }
};

int main()
{
    two object_1;
    three object_2;
    object_1.get_data();
    object_1.product();
    object_2.get_data();
    object_2.sum();
    return 0;
}