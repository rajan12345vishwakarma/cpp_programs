#include <iostream>
using namespace std;
template <class T>
class Addition
{
    int x;

public:
    T sum(T a, T b)
    {
        x = a + b;
        return x;
    }
};

int main()
{
    Addition<int> s;
    Addition<float> s1;
    float k1 = s1.sum(5.5, 7.7);
    cout << k1 << endl;
    int k = s.sum(3, 4);
    cout << k << endl;
    return 0;
}