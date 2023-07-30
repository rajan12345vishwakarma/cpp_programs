#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &v, int ele, int start, int end)
{
    int mid = start + (end-start)/2;
    if(mid>ele){
        
    }
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ele = 5;
    cout << binarySearch(v, ele, 0, 9);
    return 0;
}