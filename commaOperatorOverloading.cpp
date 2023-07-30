#include <iostream>
using namespace std;

class Comma
{
    int a, b, c;

public:
    Comma() {}
    Comma(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void print()
    {
        cout << a << " " << b << " " << c << endl;
    }
    Comma operator,(Comma x)
    {
        return x;
    }
};

int main()
{
    Comma y(1, 2, 3), z(4, 5, 6), v;
    v = (y, z);
    v.print();
    return 0;
}