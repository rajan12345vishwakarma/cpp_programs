#include <iostream>
using namespace std;

class Item
{
    int c;

public:
    Item(int c = 0)
    {
        this->c = c;
    }
    void print()
    {
        cout << c << endl;
    }
};

class Product
{
    int a, b;

public:
    Product(int a = 0, int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    void print()
    {
        cout << a << " " << b << endl;
    }
     operator Item()
    {
        return (a + b);
    }
};

int main()
{
    Product p(2, 3);
    Item i=p;
    p.print();
    i.print();
    return 0;
}