/*
    #virtual function is just a way for us to overwrite a default behaviour like even
    if we create baseclass pointer and point it to derived class it will only have access 
    to base class members(data) and methods. to overwrite this we use virtual function by just
    adding virtual keyword in front of base class function(method). and now it will
    access derived class methods and data.
*/

#include <iostream>
using namespace std;
class Base{
    public:
    int base_var=1;
    virtual void display(void){
        cout<<"B The value of Base variable is "<<base_var<<endl;
    }
};
class Derived:public Base{
    public:
    int derived_var=2;
    void display(void){
        cout<<endl;
        cout<<"D The value of Base variable is "<<base_var<<endl;
        cout<<"D The value of Derived variable is "<<derived_var<<endl;
    }
};
int main (){
    Derived d;
    Base b;
    Base *bptr;
    bptr=&d;
    bptr->base_var=1;
    bptr->display();
    // bptr->derived_var=4;
    // bptr->derived_var=2;

    return 0;
}