#include <iostream>
using namespace std;

void pascletriangle(int arr[][6], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                arr[i][j] = 1;
                cout << arr[i][j] << " ";
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 6;
    int arr[6][6];
    pascletriangle(arr, n);
    return 0;
}