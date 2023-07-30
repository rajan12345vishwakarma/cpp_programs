#include <iostream>
#include <cstring>
using namespace std;
class Cstring
{
    char arr[20];

public:
    void getstring()
    {
        cin >> arr;
    }
    bool operator==(Cstring c)
    {
        int i = 0, count = 0;
        while (arr[i] != '\0')
        {
            if (c.arr[i] != arr[i])
            {
                count++;
                break;
            }
        }
        return count;
    }
    Cstring operator+(Cstring c)
    {
        Cstring s;
        strcpy(s.arr, c.arr);
        strcat(s.arr, arr);
        return s;
    }
    void printstring()
    {
        cout << arr << endl;
    }
};
int main()
{
    Cstring s1, s2, s3;
    cout << "Input First Name : ";
    s1.getstring();
    cout << "Input Second Name : ";
    s2.getstring();
    cout << (s1 == s2);
    s3 = s1 + s2;
    cout << endl << "Full Name is : ";
    s3.printstring();
    return 0;
}