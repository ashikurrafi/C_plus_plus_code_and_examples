#include <iostream>
using namespace std;
int main()
{
    int size;
    int largest_number;
    int smallest_number;
    int *array;
    cout << "Enter number of array : ";
    cin >> size;
    array = new int[size];
    cout << "Enter elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    largest_number = smallest_number = array[0];
    for (int i = 0; i < size; ++i)
    {
        if (array[i] > largest_number)
        {
            largest_number = array[i];
        }
        if (array[i] < smallest_number)
        {
            smallest_number = array[i];
        }
    }
    cout << "Largest number is : " << largest_number << endl;
    cout << "Smallest number is : " << smallest_number;
    return 0;
}