#include <iostream>
using namespace std;

class class_2;
class class_1
{
public:
    class_1(void);
    class_1(int test);
    ~class_1();
    void set_data(int value);
    friend void add(class_1, class_2);

private:
    int data_1;
};

class_1::class_1(void)
{
    data_1 = 0;
}

class_1::class_1(int test)
{
    data_1 = test;
}

void class_1::set_data(int value)
{
    data_1 = value;
}

class_1::~class_1()
{
}

class class_2
{
public:
    class_2(void);
    class_2(int test);
    ~class_2();
    void set_data(int value);
    friend void add(class_1, class_2);

private:
    int data_2;
};

class_2::class_2(void)
{
    data_2 = 0;
}

class_2::class_2(int test)
{
    data_2 = test;
}

void class_2::set_data(int value)
{
    data_2 = value;
}

class_2::~class_2()
{
}

void add(class_1 object_1, class_2 object_2)
{
    cout << "Total : " << object_1.data_1 + object_2.data_2;
}

int main()
{
    class_1 class_1_object;
    class_2 class_2_object;
    int number_1;
    int number_2;
    cout << "Enter a number : ";
    cin >> number_1;
    cout << "Enter another number : ";
    cin >> number_2;
    class_1_object.set_data(number_1);
    class_2_object.set_data(number_2);
    add(class_1_object, class_2_object);
    return 0;
}