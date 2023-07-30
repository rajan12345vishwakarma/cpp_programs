#include <iostream>
using namespace std;
template <class T1, class T2 = int, class T3 = int>
class Addition
{
    int x, y;

public:
    T3 sum(T1 x, T2 y)
    {
        return (x + y);
    }
};
int main()
{
    Addition<char, int, char> a;
    char s = a.sum('a', 9);
    cout << s << endl;
    return 0;
}