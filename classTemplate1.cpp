#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
class Addition
{
    int x, y;

public:
    T3 add(T1 x, T2 y)
    {
        return (x + y);
    }
};
int main()
{
    Addition<float, float, float> a;
    float z = a.add(3.7, 9.9);
    Addition<int, float, float> b;
    int m = b.add(2, 4.9);
    cout << z << endl;
    cout << m << endl;
}