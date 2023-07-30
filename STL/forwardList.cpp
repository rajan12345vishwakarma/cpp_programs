#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> f;
    forward_list<int> l1;
    f.assign({2, 3, 4, 5, 6});
    f.push_front(1);
    f.push_front(6);
    l1.assign(f.begin(), f.end());
    forward_list<int>::iterator a;
    for (a = f.begin(); a != f.end(); a++)
    {
        cout << *a << " ";
    }
    cout << endl;
    for (a = l1.begin(); a != l1.end(); a++)
    {
        cout << *a << " ";
    }

    return 0;
}