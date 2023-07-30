#include <iostream>
#include <vector>
using namespace std;

int squarRoot(int num)
{
    int lo = 0;
    int hi = num;
    int val = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (mid * mid == num)
            return mid;
        else if (mid * mid <= num)
        {
            val = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid -1;
        }
    }
    return val;
}

int main()
{
    int num = 30;
    int ans = squarRoot(num);
    cout << ans << endl;
    return 0;
}