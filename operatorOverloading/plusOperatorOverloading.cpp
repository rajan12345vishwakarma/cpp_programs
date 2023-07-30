#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;
    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << real << " " << imag << endl;
    }
    Complex operator+(Complex const &x)
    {
        return (real + x.real, imag + x.imag);
        // Complex res;
        // res.real = real + x.real;
        // res.imag = imag + x.imag;
        // return res;
    }
};
int main()
{
    Complex c, c1(2, 3), c2(4, 5);
    c = c1 + c2;
    c.display();
    return 0;
}