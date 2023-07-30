#include <iostream>
using namespace std;
class A
{
public:
    static int x;
};
int A::x = 20;
int main()
{
    A a;
    cout << a.x;
    return 0;
}