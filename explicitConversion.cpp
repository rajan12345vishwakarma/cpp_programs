#include <iostream>
using namespace std;

class Complex
{

    int img, real;

public:
    Complex() {}
    Complex(int img, int real)
    {
        this->img = img;
        this->real = real;
    }
    explicit operator int()
    {
        return (real + img);
    }
};

int main()
{
    Complex c(1, 2), c1;
    int x = int(c);
    cout << x;
    // cout<<int(c); // explicit conversion
    return 0;
}