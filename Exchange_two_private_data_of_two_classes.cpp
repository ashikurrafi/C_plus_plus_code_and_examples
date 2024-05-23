#include <iostream>
using namespace std;

class number_1
{
private:
    int data_1;

public:
    int get()
    {
        return data_1;
    }
    void set(int n)
    {
        data_1 = n;
    }
    void display()
    {
        cout << "Number 1 = " << data_1 << endl;
    }
};

class number_2
{
private:
    int data_2;

public:
    int get()
    {
        return data_2;
    }
    void set(int n)
    {
        data_2 = n;
    }
    void display()
    {
        cout << "Number 2 = " << data_2 << endl;
    }
};

int main()
{
    int x, y;
    number_1 num_1;
    number_2 num_2;
    cout << "Enter number 1 : ";
    cin >> x;
    cout << "Enter number 2 : ";
    cin >> y;
    num_1.set(x);
    num_2.set(y);
    cout << "Before : " << endl;
    num_1.display();
    num_2.display();
    int temp_1, temp_2;
    temp_1 = num_1.get();
    temp_2 = num_2.get();
    num_1.set(temp_2);
    num_2.set(temp_1);
    cout << "After : " << endl;
    num_1.display();
    num_2.display();
    return 0;
}