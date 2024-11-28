#include <iostream>
using namespace std;
class BankDeposit{
    int principal;
    int year;
    float rate;
    float returnValue;
    public:
    BankDeposit(){}
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y,int r);
    void show(void);
};
BankDeposit::BankDeposit(int p,int y,float r){
    principal=p;
    year=y;
    rate=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+rate);
    }
}
BankDeposit::BankDeposit(int p,int y,int r){
    principal=p;
    year=y;
    rate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+rate);
    }
}
void BankDeposit::show(){
    cout<<endl;
    cout<<"Principal amount was "<<principal<<" Return value after "<<year<<" year"<<" is "<<returnValue<<endl;
}
int main (){
    BankDeposit b1,b2,b3;
    int principal;
    int year;
    int Rate;
    float rate;
    // cout<<"Enter the value of Principal year rate:"<<endl;
    // cin>>principal>>year>>rate;
    // b1=BankDeposit(principal,year,rate);
    // b1.show();
    cout<<"Enter the value of Principal year rate:"<<endl;
    cin>>principal>>year>>Rate;
    b1=BankDeposit(principal,year,Rate);
    b1.show();
    return 0;
}