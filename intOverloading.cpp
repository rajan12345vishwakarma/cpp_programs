#include <iostream>
using namespace std;

class dollar
{

public:
    int d;
    dollar() {}
    dollar(int d)
    {
        this->d = d;
    }
    void display()
    {
        cout << d << endl;
    }
    operator int()
    {
        return d;
    }
};
class rupee
{
    int r;

public:
    rupee() {}
    rupee(int r)
    {
        this->r = r;
    }
    void display()
    {
        cout << r << endl;
    }
    operator int()
    {
        return r;
    }
};
int main()
{
    dollar d = 1;
    rupee r = 80;
    int m = r;
    int n = d;
    cout << m << endl;
    cout << n << endl;
    d.display();
    r.display();
}