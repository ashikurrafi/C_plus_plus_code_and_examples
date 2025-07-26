#include <iostream>
using namespace std;
int main()
{
    int size;
    int *array;
    cout << "Enter array size : ";
    cin >> size;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data " << i << " : ";
        cin >> array[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    delete[] array;
    return 0;
}