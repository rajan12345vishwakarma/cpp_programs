#include <iostream>
#include <cstring>
using namespace std;

class String
{
    int size;
    char *s;

public:
    String(const char *str = NULL);
    String(const String &);
    void change(const char *);
    void print();
    ~String() { delete[] s; }
};
void String::change(const char *str)
{
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}
String::String(const char *str)
{
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

String::String(const String &old_str)
{
    size = old_str.size;
    s = new char[size + 1];
    strcpy(s, old_str.s);
}
void String::print()
{
    cout << s << " ";
}
int main()
{

    String str1("GeeksQuiz");
    String str2 = str1;

    str1.print(); // what is printed ?
    str2.print();

    str2.change("GeeksforGeeks");

    str1.print(); // what is printed now ?
    str2.print();
    return 0;
}