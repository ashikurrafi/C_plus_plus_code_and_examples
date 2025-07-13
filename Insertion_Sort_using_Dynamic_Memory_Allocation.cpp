#include <iostream>
using namespace std;
int main()
{
    int size;
    int *array;
    cout << "Enter number of array : ";
    cin >> size;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value " << i << " : ";
        cin >> array[i];
    }
    for (int i = 1; i < size; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (array[j] > current && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    delete[] array;
    return 0;
}