#include <iostream>
using namespace std;

class Integer
{
    int x;

public:
    Integer(int x)
    {
        this->x = x;
    }
    void display()
    {
        cout << x << endl;
    }
    operator int()
    {
        return x;
    }
};

int main()
{
    Integer i = 5;
    int a = i;
    cout << a;
}