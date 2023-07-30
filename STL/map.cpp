#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    map<int, string>::iterator a;
    m.insert({1, "rajan"});
    m[2] = "vishwakarma";
    m[3] = "age";
    m[4] = "stream";
    m[4] = "cse";
    m.erase(1);
    for (a = m.begin(); a != m.end(); a++)
    {
        cout << a->first << " " << a->second << " ";
    }
    return 0;
}