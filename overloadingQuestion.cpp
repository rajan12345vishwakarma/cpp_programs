#include <iostream>
using namespace std;
class product
{
    int a, b;

public:
    product() {}
    void setdata(int a = 0, int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
    void dispaly()
    {
        cout << a << " " << b << endl;
    }
};
class item
{
    int i;

public:
    item() {}
    item(product p)
    {
        i = p.get_a() + p.get_b();
    }
    void display()
    {
        cout << i << endl;
    }
};
int main()
{
    product p1;
    p1.setdata(3, 4);
    item i1 = p1;
    p1.dispaly();
    i1.display();
    return 0;
}