#include <iostream>
using namespace std;

class shape
{
public:
    virtual float area(float, float) = 0;
};
class circle : public shape
{
public:
    float area(float a, float b)
    {
        return (3.14 * a * a);
    }
};
class square : public shape
{
public:
    float area(float a, float b)
    {
        return (a * b);
    }
};
shape *choice()
{
    int n;
    cout << "Enter 1 for circle : " << endl;
    cout << "Enter 2 for square : " << endl;
    cin >> n;
    if (n == 1)
        return new circle;
    if (n == 2)
        return new square;
}

int main()
{
    shape *s;
    s = choice();
    cout << s->area(2, 4);
    return 0;
}