#include <iostream>
using namespace std;

class invent1
{
    int a;

public:
    invent1() {}
    invent1(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << a << endl;
    }
};
class invent2
{
    int b, c;

public:
    invent2() {}
    invent2(int b, int c)
    {
        this->b = b;
        this->c = c;
    }
    operator float()
    {
        return (b + c);
    }
    operator invent1()
    {
        return (b * c);
    }
};

int main()
{
    invent1 x;
    invent2 y(4, 5);
    float z;
    z = y;
    x = y;
    cout << z << endl;
    x.display();
    return 0;
}