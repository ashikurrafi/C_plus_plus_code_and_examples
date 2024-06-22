#include <iostream>
using namespace std;
int main()
{
    char string[45];
    int length;
    int flag = 0;
    cout << "Enter a word : ";
    cin >> string;
    length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << string << " is not a palindrome" << endl;
    }
    else
    {
        cout << string << " is a palindrome" << endl;
    }
    system("pause");
    return 0;
}