#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A()
    {
        cout << "class A constructor called" << endl;
        a = 10;
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout << "class B constructor called" << endl;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "class C constructor called" << endl;
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << "class D constructor called" << endl;
    }
};

int main()
{
    D d;
    cout << d.a << endl;
}