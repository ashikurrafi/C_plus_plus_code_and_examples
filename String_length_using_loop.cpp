#include<iostream>
using namespace std;
int main()
{
	int counter = 0;
	char character[45];
	cout << "Enter a string : ";
	gets_s(character);
	for (int i = 0; character[i] != '\0'; i++)
	{
		counter++;
	}
	cout << "String length : " << counter;
	return 0;
}