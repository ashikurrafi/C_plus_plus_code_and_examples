#include <iostream>
using namespace std;

class Time
{
public:
    Time(void);
    Time(int a, int b, int c);
    void get_Time();
    void show_Time();
    void calculate_Time(Time t1, Time t2);
    ~Time();

private:
    int second;
    int minute;
    int hour;
};

Time::Time(void)
{
    second = 0;
    minute = 0;
    hour = 0;
}

Time::Time(int a, int b, int c)
{
    second = a;
    minute = b;
    hour = c;
}

void Time::get_Time()
{
    cout << "Enter second : ";
    cin >> second;
    cout << "Enter minute : ";
    cin >> minute;
    cout << "Enter hour : ";
    cin >> hour;
}

void Time::show_Time()
{
    cout << endl;
    cout << "Time after addition : ";
    cout << hour << ":" << minute << ":" << second;
}

void Time::calculate_Time(Time t1, Time t2)
{
    this->second = t1.second + t2.second;
    this->minute = t1.minute + t2.minute + this->second / 60;
    this->hour = t1.hour + t2.hour + (this->minute / 60);
    this->minute %= 60;
    this->second %= 60;
}

Time::~Time()
{
}

int main()
{
    Time time_1;
    Time time_2;
    Time time_3;
    cout << "Enter time 1 : " << endl;
    time_1.get_Time();
    cout << endl;
    cout << "Enter time 2 : " << endl;
    time_2.get_Time();
    time_3.calculate_Time(time_1, time_2);
    time_3.show_Time();
    return 0;
}