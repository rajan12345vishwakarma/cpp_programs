#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &v, int target, int lo, int hi)
{

    int val = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] == target)
        {
            val = mid;
            hi = mid - 1;
        }
        else if (v[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return val;
}

int main()
{
    vector<int> v = {2, 5, 5, 5, 6, 6, 9, 9, 9, 9};
    int target = 9;
    int ans = func(v, target, 0, v.size() - 1);
    cout << ans << endl;
    return 0;
}