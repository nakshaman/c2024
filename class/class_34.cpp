#include <iostream>
using namespace std;
class Number{
    private:
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a=num;
    }
    // when no copy constructor is found,compiler supplies it's own copy constructor
    Number(Number &obj){
        cout<<"Copy constructor called"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The number is "<<a<<endl;
    }
};
int main (){
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    Number x1(x);
    x1.display();
    return 0;
}