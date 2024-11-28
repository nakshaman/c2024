#include <iostream>
using namespace std;
int main (){
    int a=5;
    int *b=&a;
    cout<<b<<endl;
    cout<<&a<<endl;

    int **c=&b;
    cout<<"The adress of **c is "<<**c<<endl;
    cout<<"The adress of **c is "<<*c<<endl;
    return 0;
}