#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(8);
    v.push_back(3);
    v.push_back(11);
    v.insert(v.begin(), 10);
    v.insert(v.begin(), 12);
    int size = v.size();

    // vector<int>::iterator a;

    for (auto a = v.begin(); a != v.end(); a++)
    {
        cout << *a << " ";
    }

    cout << endl
         << v.size();
    cout << endl
         << v.capacity();

    return 0;
}