#include <iostream>
using namespace std;
class Time
{
    int hour, min;

public:
    Time() {}
    Time(int hour, int min)
    {
        this->hour = hour;
        this->min = min;
    }
    friend Time operator+(int x, Time t)
    {
        Time newTime;
        newTime.hour = x + t.hour;
        newTime.min = t.min;
        return newTime;
    }
    friend ostream &operator<<(ostream &extraction, Time a)
    {
        extraction << a.hour << " " << a.min << endl;
    }
};
int main()
{
    Time t1(2, 30), t2(3, 40), t3;
    t3 = 2 + t1;
    cout << t3 << t2;
    return 0;
}