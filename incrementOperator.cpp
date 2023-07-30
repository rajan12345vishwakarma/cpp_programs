#include <iostream>
using namespace std;
class Fraction
{
    int numerator, denominator;

public:
    Fraction(int numerator = 0, int denominator = 0)
    {
        this->denominator = denominator;
        this->numerator = numerator;
    }
    Fraction operator++(int x)
    {
        Fraction incr = (*this);
        numerator++;
        denominator++;
        return incr;
    }
    Fraction operator++()
    {
        numerator++;
        denominator++;
        return (*this);
    }
    void display()
    {
        cout << numerator << " " << denominator << endl;
    }
};
int main()
{
    Fraction f1(1, 2), f2(3, 4), f;
    f = ++f2;
    f = f1++;
    f1.display();
    f2.display();
    f.display();
}