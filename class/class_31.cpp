#include <iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    void printData(void){
        cout<<a<<" +"<<b<<"i"<<endl;
    }
};
int main (){
    complex c1;
    c1.printData();
    complex c2(2);
    c2.printData();
    complex c3(4,5);
    c3.printData();
    return 0;
}