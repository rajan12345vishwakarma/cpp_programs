#include <iostream>
using namespace std;

class A
{
public:
    static int x;
    int y;
    void static sum(int a, int b)
    {
        x = a + b;
        cout << x << endl;
        // cout << y << endl;      // since y is not static so it is not allwoed in
        // static scope;
    }
};
int A::x;
int main()
{
    A num;
    num.sum(3, 4);
    return 0;
}