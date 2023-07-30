#include<iostream>
using namespace std;
int main(){
    int n;
    int integer[15]={1,2,3,4,5,6,7,8,9,10,50,100,500,1000};
    char roman[15][5]={"I","II","III","IV","V","VI","VII","VIII","IX","X","L","C","D","M"};
    cout<<"Enter the number : ";  cin>>n;
    for(int i=0;i<15;i++){

        if(n==integer[i]){
            cout<<roman[i];
            break;
        }
        if(n==0){
            cout<<"invalid choice";
            break;
        }
        if(n<integer[i]){
            cout<<roman[i-1];
            n=n-integer[i-1];
            i=0;
        }
        if(n>1000){
           while(n>1000){
               cout<<"M";
               n=n-1000;
           }
        }

    }
    return 0;
}
