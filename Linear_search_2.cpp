#include <iostream>
using namespace std;
int main()
{
    int size;
    int *array;
    int element;
    int i;
    cout << "Enter number of elements in array : ";
    cin >> size;
    array = new int[size];
    cout << "Enter " << size << " integer(s)" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter data " << i << " : ";
        cin >> array[i];
    }
    cout << "Enter element to search : ";
    cin >> element;
    for (i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            cout << "Data is present at location " << i;
            break;
        }
    }
    if (i == size)
    {
        cout << "Element isn't present in the array.";
    }
    delete[] array;
    return 0;
}