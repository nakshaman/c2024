#include <iostream>
using namespace std;
int main (){
    // Basic example

    // int a=4;
    // int *ptr=&a;
    // cout<<*(ptr)<<endl;

    //new operator
    int *p=new int(40);
    // float *p=new float(39.99);
    cout<<"Value at adress P is "<<*(p)<<endl;

    int *arr=new int[2];
    arr[0]=4;
    arr[1]=12;
    arr[2]=18;
    cout<<"Value of dynamic arr[0] is "<<arr[0]<<endl;
    cout<<"Value of dynamic arr[1] is "<<arr[1]<<endl;
    cout<<"Value of dynamic arr[2] is "<<arr[2]<<endl;

    // delete operator
    // syntax for deleting dynamically allocated array 
    delete [] arr;
    // syntax for deleting a variable of int float whatever
    delete p;
    return 0;
}