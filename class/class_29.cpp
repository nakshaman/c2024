#include <iostream>
using namespace std;
// constructor is a special member function with same name as of the class 
// it is used to intiliaze the objects of its class
// it is automatically invoked whenever the object is created
class complex{
    private:
    int a,b;
    public:
    complex (void);
    void printData(void){
        cout<<a<<" +"<<b<<endl;
    }
};
complex::complex(void){
    // cout<<"Hello world"<<endl;
    a=0;
    b=0;
}
int main (){
    complex o1,o2;
    o1.printData();
    o2.printData();
    return 0;
}
/*
characteristics of constructor
    1.it should be declared in the public section of the class
    2.they are automatically invoked whenever the object is created
    3.they cannot return values and do not have a return type
    4.it can have default arguments
    5.we cannot refer to their adress
    
*/