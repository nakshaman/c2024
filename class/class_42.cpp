#include <iostream>
using namespace std;
class SimpleCalc{
    protected:
    int a,b;
    public:
    void setData(int,int);
    int add();
    int subtract();
};
void SimpleCalc::setData(int val1,int val2){
    a=val1;
    b=val2;
}
int SimpleCalc::add(){
    return a+b;
}
int SimpleCalc::subtract(){
    return a-b;
}
class ScientificCalc{
    int x,y;
    public:
    void setData2(int,int);
    int divide();
    int multiple();
};
void ScientificCalc::setData2(int a1,int b2){
    x=a1;
    y=b2;
}
int ScientificCalc::multiple(){
    return x*y;
}
int ScientificCalc::divide(){
    return x/y;
}
class Derived:public SimpleCalc,public ScientificCalc{
    public:
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"add "<<add()<<endl;;
        cout<<"subtract "<<subtract()<<endl;;
        cout<<"multiple "<<multiple()<<endl;;
        cout<<"divide "<<divide()<<endl;;
    }
};  
int main (){
    Derived d;
    d.setData(2,1);
    d.setData2(4,2);
    d.display();
    return 0;
}