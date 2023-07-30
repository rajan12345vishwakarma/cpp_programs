#include <iostream>
using namespace std;
class Arrow
{
    int value;

public:
    Arrow(int value)
    {
        this->value = value;
    }
    void print()
    {
        cout << value << endl;
    }
    Arrow *operator->()
    {
        return (this);
    }
};
int main()
{
    Arrow a(25);
    a.print();
    a->print();
    return 0;
}