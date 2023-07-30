#include <iostream>
using namespace std;
class Addition
{

public:
    char a, b;
    template <class T1, class T2, class T3 = Addition>
    T3 change(T1 a, T2 b)
    {
        Addition num;
        char temp = a;
        a = b;
        b = temp;
        num.a = a;
        num.b = b;
        return num;
    }
};
int main()
{
    Addition x, y;
    y = x.change('c', 'd');
    cout << y.a << " " << y.b << endl;
    return 0;
}