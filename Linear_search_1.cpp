#include <iostream>
using namespace std;

int main()
{
    int size;
    int *array;
    int data;
    cout << "Enter size of array : ";
    cin >> size;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i << " : ";
        cin >> array[i];
    }
    cout << "Enter element to search : ";
    cin >> data;
    int temp = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == data)
        {
            cout << "Element found at location : " << i << endl;
            temp = 0;
        }
    }
    if (temp == -1)
    {
        cout << "No element found";
    }
    delete[] array;
    return 0;
}