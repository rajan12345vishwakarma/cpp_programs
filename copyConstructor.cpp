#include <iostream>
using namespace std;

class Addition
{
public:
    int a, b;
    Addition() {}
    Addition(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Addition(const Addition &x)
    { // const is optional
        a = x.a;
        b = x.b;
    }
};

int main()
{
    Addition k(4, 5);
    Addition n;
    n = k;
    cout << n.a << endl
         << n.b;
    return 0;
}