#include <iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
    Simple(int x,int y=7){
        data1=x;
        data2=y;
    }
    void printData(void){
        cout<<"The value of Data1 is "<<data1<<" and Data2 is "<<data2<<endl;
    }
};
int main (){
    Simple o1(3,4);
    o1.printData();
    Simple o2(10);
    o2.printData();
    return 0;
}