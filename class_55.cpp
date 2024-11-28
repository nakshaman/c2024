#include <iostream>
using namespace std;
class Base{
    public:
    int base_var;
    void display(void){
        cout<<"The value of Base variable is "<<base_var<<endl;
    }
};
class Derived:public Base{
    public:
    int derived_var;
    void display(void){
        cout<<endl;
        cout<<"The value of Base variable is "<<base_var<<endl;
        cout<<"The value of Derived variable is "<<derived_var<<endl;
    }
};
int main (){
    Base *base_pointer;
    Base o_base;
    Derived o_derived;
    base_pointer=&o_derived; // pointing base class pointer to derived class pointer
    base_pointer->base_var=7;
    base_pointer->display();
    // base_pointer->derived_var=4; will throw an error because base class pointer can't 
    Derived *derived_ptr;
    derived_ptr=&o_derived;
    derived_ptr->base_var=100;
    derived_ptr->derived_var=21;
    derived_ptr->display();

    return 0;
}