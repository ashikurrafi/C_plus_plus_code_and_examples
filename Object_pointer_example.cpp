#include <iostream>
using namespace std;
class student
{
private:
    float result;

public:
    int ID;
    student(float a, int b)
    {
        result = a;
        ID = b;
    }
    void show()
    {
        cout << "ID and result = " << ID << " " << result;
    }
};
int main()
{
    student test(2.96, 91);
    student *pointer;
    pointer = &test;
    pointer->show();
    return 0;
}