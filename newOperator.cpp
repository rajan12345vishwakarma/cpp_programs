#include <iostream>
using namespace std;
class Student
{
    int rollno;
    string name;

public:
    Student() {}
    Student(string name, int rollno) : name(name), rollno(rollno)
    {
        cout << "parameterized constructor called" << endl;
    }
    void display()
    {
        cout << name << " " << rollno << endl;
    }
    void operator delete(void *p)
    {
        cout << "Overloading delete operator" << endl;
        free(p);
    }
};
void *operator new(size_t size)
{
    cout << "Overloading new operator" << endl;
    void *p = malloc(size);
    return p;
}
void operator delete(void *p)
{
    cout << "Overloading delete operator" << endl;
    free(p);
}

int main()
{
    Student *s1;
    s1 = new Student("rajan", 1);
    s1->display();
    delete (s1);
    int *a = new int;
    char *b = new char;
    delete (a);
    return 0;
}