#include <iostream>
using namespace std;
class Addition
{
    int x, y;

public:
    template <class T1, class T2 = char, class T3 = int>
    T3 add(T1 x, T2 y)
    {
        return (x + y);
    }
};
int main()
{
    Addition a;
    char c = a.add<int, char, int>(2, 'a');
    cout << c << endl;
    return 0;
}