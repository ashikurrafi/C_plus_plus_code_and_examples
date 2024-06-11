#include <iostream>
using namespace std;
void bubble(int *ptr, int s)
{
    int i, j;
    int temp;
    for (i = 1; i < s; i++)
    {
        for (j = 0; j < s - i; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int arr[10];
    int i;
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << ":";
        cin >> arr[i];
    }
    cout << "Before sorting : ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    bubble(arr, size);
    cout << "\nAfter sorting : ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}