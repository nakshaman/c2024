#include <iostream>
#include <fstream>
using namespace std;
int main (){
    // ofstream o;
    // o.open("sample60.txt");
    // o<<"Naksh is my name\n";
    // o<<"Sanjana is my name";
    // o.close();

    string s,s2;
    ifstream i;
    i.open("sample60.txt");
    // i>>s>>s2;
    // getline(i,s);
    // cout<<s<<endl;
    // cout<<s2<<endl;
    // while(i.eof()==0){
    //     getline(i,s);
    //     cout<<s<<endl;
    // }
    i.close();
    return 0;
}