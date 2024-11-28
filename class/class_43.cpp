/*
    a ambiguity will occur if you will inherit. Derived from Base1 and Base2
    and both the base classes will a method with same name then the derived class
    will use which one(method). in this case we have to declare the method we will inherit 
    in derived class with the help of scope resolution operator and the syntax will be
    base class::method name like Base2::greet();
*/
#include <iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"Namaste"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Hello world"<<endl;
    }
};
class Derived:public Base1,public Base2{
    private:
    int a;
    public:
    void greet(){
        Base1::greet();
    }

};
int main (){
    Base1 a;
    a.greet();
    Base2 b;
    b.greet();
    Derived d;
    d.greet();
    return 0;
}