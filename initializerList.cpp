#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A(int x)
    {
        this->x = x;
    }
};
class B
{
    int a, &b;
    A a1;

public:
    B(int a, int b) : a1(3), b(b)
    {
        this->a = a;
        // this->b = b;
    }
    void display()
    {
        cout << a1.x << " " << a << " " << b << endl;
    }
};
int main()
{
    B m(2, 3);
    m.display();
    B n(4, 5);
    n.display();
    return 0;
}