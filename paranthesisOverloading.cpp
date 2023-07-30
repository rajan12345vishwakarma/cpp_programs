#include <iostream>
using namespace std;
class Distance
{
    int feet, intches;

public:
    Distance() {}
    Distance(int feet, int intches)
    {
        this->feet = feet;
        this->intches = intches;
    }
    void display()
    {
        cout << feet << " " << intches << endl;
    }
    Distance operator()(int a, int b, int c)
    {
        Distance d;
        d.feet = feet + a + b;
        d.intches = intches + c;
        return d;
    }
};
int main()
{
    Distance d1(1, 2), d2;
    d1.display();
    d2 = d1(3, 4, 5);
    d2.display();
    return 0;
}