/*
    multiple inheritence :
    syntax is 
    class derived:public base1,pulic base2{};

*/
#include <iostream>
using namespace std;
class Base1{
    protected:
    int base1var;
    public:
    void set_base1var(int a){
        base1var=a;
    }
};
class Base2{
    protected:
    int base2var;
    public:
    void set_base2var(int a){
        base2var=a;
    }
};
class Derived:public Base1,public Base2{
    public:
    void show(){
        cout<<"The value of Base 1 var is "<<base1var<<endl;
        cout<<"The value of Base 2 var is "<<base2var<<endl;
        cout<<"The sum of Base1 var and Base 1 var is "<<base1var+base2var<<endl;
    }
};
int main (){
    Derived d;
    d.set_base1var(1);
    d.set_base2var(2);
    d.show();
    return 0;
}