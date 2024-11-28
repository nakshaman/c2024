// There are two types of header file
// 1. System header file
// #include <iostream>
// 2. User defined header file
// #include "naksh.h"
// this will produce an error if naksh.h file is not present in the current directory

#include <iostream>
#include "naksh.h"
using namespace std;
int main (){
    cout<<"Hello World"<<endl;
    return 0;
}