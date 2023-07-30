#include <iostream>
using namespace std;

class subscript
{
    char str[100];
    const int size = 100;

public:
    subscript() {}
    void getinput(int index, int value)
    {
        if (index >= size)
        {
            cout << "out of bound ! " << endl;
            exit(0);
        }
        else
        {
            str[index] = value;
        }
    }
    int operator[](int index)
    {
        if (index >= size)
        {
            cout << "out of exception ! " << endl;
            exit(0);
        }
        return (str[index]);
    }
};

int main()
{
    subscript a;
    a.getinput(90, 5);
    cout << a[9];
    return 0;
}