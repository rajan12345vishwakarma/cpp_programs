#include <iostream>
using namespace std;
class Addition
{
public:
    int x, y;
    Addition() { cout << "default constructor called" << endl; }
    //  Addition(const Addition &t){
    //     x=t.x; y=t.y;
    //  }
};
Addition fun()
{
    Addition k;
    k.x = 1;
    k.y = 2;
    return k;
}
int main()
{
    Addition a, b;
    a = fun();
    b = a;
    Addition c = a;
    cout << c.x << endl
         << c.y << endl;
    cout << b.x << endl
         << b.y << endl;
    cout << a.x << endl
         << a.y;
    return 0;
}