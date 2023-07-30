#include <iostream>
using namespace std;
class Addition
{
public:
    int x, y;
    Addition(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int sum()
    {
        return (x + y);
    }
};
int main()
{
    Addition *p = new Addition(2, 3);
    cout << (*p).sum() << endl;
    cout << p->sum() << endl;
    cout << p->x << endl;
    cout << p->y << endl;

    return 0;
}