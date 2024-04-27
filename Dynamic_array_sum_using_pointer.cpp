#include <iostream>
using namespace std;
int main()
{
    int size;
    int sum = 0;
    int *array;
    int *pointer;
    cout << "Enter size of array : ";
    cin >> size;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i << " : ";
        cin >> array[i];
    }
    pointer = array;
    for (int i = 0; i <= size; i++)
    {
        sum = sum + *pointer;
        pointer++;
    }
    cout << "Total : " << sum;
    return 0;
}