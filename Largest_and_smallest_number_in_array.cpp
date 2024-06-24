#include <iostream>
using namespace std;
int main()
{
    int *array;
    int size;
    int maximum_value;
    int minimum_value;
    cout << "How many data do you have : ";
    cin >> size;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data " << i << " : ";
        cin >> array[i];
    }
    maximum_value = array[0];
    minimum_value = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > maximum_value)
        {
            maximum_value = array[i];
        }
        if (array[i] < minimum_value)
        {
            minimum_value = array[i];
        }
    }
    cout << "Largest element is : " << maximum_value;
    cout << endl;
    cout << "Smallest element is : " << minimum_value;
    delete[] array;
    return 0;
}