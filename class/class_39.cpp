/*
    access modifiers :
    1. we can inherit something which is private in base class
    2. if we inherit in public- things remain same as base class
    protected will be protected,and public will be public.
    3. if we inherit in protected- protected will be protected 
    and public will also be protedted
*/
#include <iostream>
using namespace std;
class Base{
    protected:
    int a;
    private:
    int b;
    public:
    int returnB();
    void setData();
};
int Base::returnB(){
    return b;
}
void Base::setData(void){
    a=10;
    b=20;
}
class Derived:public Base{
    public:
    int sum;
    void setValue();
    void display();
};
void Derived::setValue(){
    sum=a+returnB();
}
void Derived::display(){
    cout<<"the sum is "<<sum<<endl;
}
int main (){
    Derived d1;
    d1.setData();
    d1.setValue();
    d1.display();
    return 0;
}
