#include <bits/stdc++.h>
using namespace std;

void primeNumbers(int n)
{
    int i, num = 2, c;
    int count = 0, temp = 0;
    while (count < n)
    {
        c = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                c++;
                num++;
                temp++;
                break;
            }
        }
        if (c == 0)
        {
            count++;
            cout << num << " ";
            num++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter how many prime numbers do you want to print : ";
    cin >> n;
    primeNumbers(n);
    return 0;
}