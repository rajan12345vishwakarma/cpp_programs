#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 20> a = {1, 2, 3, 4, 5, 6};
    array<int, 20> b = {7, 8, 9, 10, 11, 12};
    // a.swap(b);
    for (int i = 0; i < a.size(); i++)
    {
        // cout<<a[i]<<" ";
        cout << a.at(i) << " ";
    }
    cout << get<4>(a) << endl;
    cout << get<1>(a) << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    return 0;
}