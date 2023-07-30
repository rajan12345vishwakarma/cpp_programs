#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;  //create file
    string line;

    // fout.open("./abc.txt",ios::app);
    fout.open("./xyz.txt",ios::app);
    while (fout)
    {
        getline(cin, line);
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();

   ifstream fin;     //read file
   fin.open("./abc.txt");
   while(getline(fin,line)){
      cout<<line<<endl;
   }
   fin.close();

    return 0;
}