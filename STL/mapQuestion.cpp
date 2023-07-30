
// find the frequency of elements

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int arr[] = {7, 2, 3, 6, 8, 9, 2, 1, 2, 4, 5, 3, 2, 7, 7, 8};
    map<int, int> m;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        m[arr[i]]++;
    }
    for (auto a = m.begin(); a != m.end(); a++)
    {
        cout << a->first << " " << a->second << endl;
    }
    return 0;
}
