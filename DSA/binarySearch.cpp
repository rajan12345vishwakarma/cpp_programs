#include <iostream>
#include <vector>
using namespace std;

bool bsearch(vector<int> &v, int target)
{
    int size = v.size();
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (v[mid] == target)
            return true;
        else if (v[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

int binarySearchRecursive(vector<int> &v, int target, int lo, int hi)
{
    if (lo > hi)
        return -1;
    int mid = (lo + hi) / 2;
    if (target == v[mid])
        return mid;
    else if (v[mid] < target)
    {
        lo = mid + 1;
        return binarySearchRecursive(v, target, lo, hi);
    }
    else
    {
        hi = mid - 1;
        return binarySearchRecursive(v, target, lo, hi);
    }
}

int main()
{
    vector<int> v = {1, 9, 13, 15, 18, 22, 35, 40};
    int target = 15;
    bool isPresent = bsearch(v, target);
    int ans = binarySearchRecursive(v, target, 0, v.size() - 1);
    cout << ans << endl;
    // cout << isPresent << endl;
    return 0;
}