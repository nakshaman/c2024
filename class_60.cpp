
/*
    The useful classes for working with files in C++ is :-
    1. fstreambase
    2. ifstream -derived from fstream
    3. ofstream -derived from fstream
    In order to work with files in C++, you will have to open it.Primarily there are two ways
    to open a file:
    1. using the constructor
    2. using the member function open() of the class
*/
#include <iostream>
#include <fstream>
using namespace std;
int main (){

    ofstream o("sample60.txt");
    string s="aman kumar";
    o<<s;
    o.close();
    ifstream inp("sample60.txt");
    string str;
    getline(inp,str);
    cout<<str<<endl;
    inp.close();

    return 0;
}