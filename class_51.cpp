#include <iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
    void setData(int i,int j){
        real=i;
        imaginary=j;
    }
    void getData(){
        cout<<"The value of real number is "<<real<<endl;
        cout<<"The value of imaginary number "<<imaginary<<endl;
    }
};
int main (){
    Complex c;
    // Complex *ptr=&c;
    // this will create pointer dynamically 
    // Complex *ptr=new Complex;
    // bracket is important becuase dot operator precedence is high as compared to * operator
    // (*ptr).setData(1,2);
    // and this is arrow operator
    // arrow operator means defrence the ptr pointer use his get data method
    // ptr->getData();
    // c.setData(1,2);
    // c.getData();

    // array of objects 
    Complex *p=new Complex[3];
    p->setData(3,4);
    p->getData();
    return 0;
}