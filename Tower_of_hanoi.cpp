#include <iostream>
using namespace std;

void tower_of_Hanoi(int number, char source_rod, char destination_rod, char temp_rod)
{
    if (number == 0)
    {
        cout << "No plates to exchange" << endl;
    }
    else if (number == 1)
    {
        cout << "Move disk 1 from rod " << source_rod << " to rod " << destination_rod << endl;
    }
    else
    {
        tower_of_Hanoi(number - 1, source_rod, temp_rod, destination_rod);
        cout << "Move disk " << number << " from rod " << source_rod << " to rod " << destination_rod << endl;
        tower_of_Hanoi(number - 1, temp_rod, destination_rod, source_rod);
    }
}

int main()
{
    int data;
    cout << "Enter number of plates to exchange : ";
    cin >> data;
    tower_of_Hanoi(data, 'A', 'C', 'B');
    return 0;
}