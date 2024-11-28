#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalc{
    int a,b;
    public:
    void setDataSimple(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void performOperationSimple(){
        cout<<"Value of a+b "<< a+b <<endl;
        cout<<"Value of a-b "<< a-b <<endl;
        cout<<"Value of a*b "<< a*b <<endl;
        cout<<"Value of a/b "<< a/b <<endl;
    }
};
class ScientificCalc{
    int a,b;
    public:
    void setDataScientific(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void performOperationScientific(){
        cout<<"Value of cos a "<< cos(a) <<endl;
        cout<<"Value of sin a "<< sin(a) <<endl;
        cout<<"Value tan cos a "<< tan(a) <<endl;
        cout<<"Value tan exp a "<< exp(a) <<endl;
    }
};
class HybridCalc :public SimpleCalc,public ScientificCalc{

};
int main (){
    HybridCalc h;
    h.setDataSimple();
    h.setDataScientific();
    h.performOperationSimple();
    h.performOperationScientific();
    return 0;
}