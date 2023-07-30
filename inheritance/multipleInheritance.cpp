#include <iostream>
using namespace std;

class A
{
public:
    int a;
};
class B : public A
{
public:
    int b;
};
class C : public A
{
public:
    int c;
};
class D : public B, public C
{
public:
    int d;
};
int main()
{
    D x;
    // x.a = 20;   // it will give error
    x.B::a = 20;
    cout << x.B::a << endl;
    x.b = 10;
    cout << x.b << endl;
    return 0;
}
