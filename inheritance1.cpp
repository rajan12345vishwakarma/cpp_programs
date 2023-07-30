#include <iostream>
using namespace std;

class Flight
{
public:
    virtual void search()
    {
        cout << "flight searching  from parent class" << endl;
    }
    virtual void book()
    {
        cout << "flight book from parent class" << endl;
    }
    void details()
    {
        cout << "details will be available in few second" << endl;
    }
};
class SpiceJet : public Flight
{
public:
    void search()
    {
        cout << "flight searching from spicejet" << endl;
    }
    void book()
    {
        cout << "flight book from spicejet" << endl;
    }
};
class Indigo : public Flight
{
public:
    void search()
    {
        cout << "flight searching from Indigo" << endl;
    }
    void book()
    {
        cout << "flight book from Indigo" << endl;
    }
};

int main()
{
    Flight *f;
    Indigo i;
    SpiceJet s;
    f = &i;
    f->book();
    return 0;
}