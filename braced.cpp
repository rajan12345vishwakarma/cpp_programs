#include<iostream>
using namespace std;
int main(){
    int a{};
    int b(2);
    int c{3};
    int d();
    int e();
    // int f{2.3};  to give float value to int is not allowed
    int g(2.3);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<g;
    return 0;
}