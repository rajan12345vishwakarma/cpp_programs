#include <iostream>
#include <cstring>
using namespace std;
class String
{
    int size;
    char *s;

public:
    String(const char *str = NULL);
    ~String() { delete[] s; }
    String(const String &);
    void display()
    {
        cout << s << endl;
    }
    void change(const char *);
};
String::String(const char *str)
{
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}
String::String(const String &old)
{
    delete s;
    size = old.size;
    s = new char[size + 1];
    strcpy(s, old.s);
}
void String::change(const char *ch)
{
    size = strlen(ch);
    s = new char[size + 1];
    strcpy(s, ch);
}
int main()
{
    String k = "Rajan Vishwakarma";
    k.display();
    String k1 = k;
    k1.display();
    k1.change("vikas bhardwaj");
    k1.display();
    return 0;
}