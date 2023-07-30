#include <iostream>
using namespace std;
int main()
{
    char a[20], b[50];
    cout << "Enter Your Name : ";
    cin.get(a, 20).get();
    cout << "Enter Your Address : ";
    cin.get(b, 50).get();
    cout << a << endl
         << b;
    return 0;
}