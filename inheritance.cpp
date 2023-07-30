#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A() {}
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
    ~A() { cout << "A destructor called" << endl; }
};
class B : public A
{
    int c;

public:
    B() {}
    B(int c) : A(2, 3)
    {
        this->c = c;
    }
    void display()
    {
        cout << c << " " << endl;
    }
    ~B() { cout << "B destructor called" << endl; }
};
int main()
{
    A x;
    B y(4);
    y.display();
    x.display();
    return 0;
}