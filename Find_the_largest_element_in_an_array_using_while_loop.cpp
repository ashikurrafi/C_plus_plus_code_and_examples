#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int *array;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value " << i << " : ";
        cin >> array[i];
    }
    int max = array[0];
    int i = 0;
    while (i < size)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        i++;
    }
    cout << "Maximum value : " << max;
    delete[] array;
    return 0;
}