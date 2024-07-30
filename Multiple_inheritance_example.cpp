#include <iostream>
using namespace std;
class student
{
public:
    int marks;
    void add_data()
    {
        cout << "Enter marks : ";
        cin >> marks;
    }
};

class test : public student
{
public:
    int flag = 0;
    void check()
    {
        if (marks >= 33)
        {
            flag = 1;
        }
    }
};

class result : public test
{
public:
    void print()
    {
        if (flag == 1)
        {
            cout << "Pass";
        }
        else
        {
            cout << "Fail";
        }
    }
};

int main()
{
    result object;
    object.add_data();
    object.check();
    object.print();
}