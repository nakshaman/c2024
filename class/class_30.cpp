#include <iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(int,int);
    void printData(void){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x,int y){ // this is a parametrized constructor as it takes two parameter
    a=x;
    b=y;
}
int main (){
    complex o1(4,5); // implicit call
    o1.printData();
    complex b=complex(1,2); // explicit call
    b.printData();
    return 0;
}