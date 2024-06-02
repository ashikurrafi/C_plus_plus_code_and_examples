#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string sentence;
    cout << "Enter a string to write in text file : ";
    getline(cin, sentence);
    fstream text_file;
    text_file.open("text_file.txt", ios::out);
    if (text_file.is_open())
    {
        text_file << sentence;
        text_file.close();
        cout << "Writing in file is done" << endl;
        cout << "File contain : " << sentence << endl;
    }
    else
    {
        cout << "Writing in file is not done";
    }
    return 0;
}