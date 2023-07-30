#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout << "Enter First Number : ";
    cin >> num1;
    try
    {
        cout << "Enter Operator : ";
        cin >> op;
        cout << "Enter Second Number : ";
        cin >> num2;
        if (op == '+' || op == '-' || op == '*' || op == '/')
        {
            switch (op)
            {
            case '+':
                cout << num1 + num2;
                break;
            case '-':
                cout << num1 - num2;
                break;
            case '*':
                cout << num1 * num2;
                break;
            case '/':
                if (num2 == 0)
                    throw num2;
                else
                    cout << num1 / num2;
                break;
            }
        }
        else
            throw 'a';
    }

    catch (int num2)
    {
        cout << "Enter Valid Number !";
    }
    catch (char op)
    {
        cout << "Invalid Operator ! ";
    }

    return 0;
}