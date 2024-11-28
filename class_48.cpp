/*
    case 1:
    class B:public A{}
    order of excution-> first class A constructor will run then B because A is base class

    case 2:
    class A:public B,public C{}
    order of execution ->first B->C->A

    case 3:
    class A:public B,virtual public C{}
    order of execution ->C because it is virtual class and virtual class has 
    priority over normal class so C->B->A

*/

#include <iostream>
using namespace std;
class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printDatabase1(void){
        cout<<"Base 1 class data value is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printDatabase2(void){
        cout<<"Base 2 class data value is "<<data2<<endl;
    }
};
class Derived:public Base1,public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printDataDerived(void){
        cout<<"The value of derived 1 is "<<derived1<<endl;
        cout<<"The value of derived 2 is "<<derived2<<endl;
    }
};
int main (){

    Derived naksh(1,2,3,4);
    naksh.printDatabase1();
    naksh.printDatabase2();
    naksh.printDataDerived();
    
    return 0;
}