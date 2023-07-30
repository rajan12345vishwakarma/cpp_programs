#include<iostream>
using namespace std;
class Addition{
    public:
  int x,y;
  Addition(int a,int b)
  {
    x=a; y=b;
  }
  int add() const 
  {
    // x=9;       not possible because of const function
    return(x+y);
  }
};
int main(){

  Addition p(2,3);
  p.x=9;
  cout<<p.add();
  return 0;
}