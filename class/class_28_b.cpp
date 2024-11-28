#include <iostream>
using namespace std;
class c2;
class c1{
    private:
    int val1;
    public:
    friend void exchange_class_data(c1 &,c2 &);
    void inputData(int inputt){
        val1=inputt;
    }
    void display(){
        cout<<val1<<endl;
    }
};
class c2{
    private:
    int val2;
    public:
    friend void exchange_class_data(c1 &,c2 &);
    void inputData(int inputt){
        val2=inputt;
    }
    void display(){
        cout<<val2<<endl;
    }
};
void exchange_class_data(c1 &x,c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main (){
    c1 o1;
    c2 o2;
    o1.inputData(4);
    o1.display();
    o2.inputData(7);
    o2.display();
    exchange_class_data(o1,o2);
    cout<<"after swap"<<endl;
    o1.display();
    o2.display();
    return 0;
}