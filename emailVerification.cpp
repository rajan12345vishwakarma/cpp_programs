#include <iostream>
using namespace std;

bool isvalid(char *email)
{
    int dot = 0;
    int at = 0;
    int dotpos, atpos;
    int i = 0;
    while (email[i] != '\0')
    {
        if (email[i] == '@')
        {
            at++;
            atpos = i;
        }
        else if (email[i] == '.')
        {
            dot++;
            dotpos = i;
        }
        i++;
    }
    if (at == 1 && dot == 1 && dotpos == i - 4)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    char email[100];
    cout << "Enter email : ";
    cin.getline(email, 100);
    if (isvalid(email))
        cout << "valid email address" << endl;
    else
        cout << "invalid email address" << endl;

    return 0;
}