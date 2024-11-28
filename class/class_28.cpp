#include <iostream>
using namespace std;
class Y;
class X{
    private:
    int data;
    public:
    void setData(int value){
        data=value;
    }
    friend void add(X ,Y);
};
class Y{
    private:
    int num;
    public:
    void setData(int value){
        num=value;
    }
    friend void add(X , Y);
};
void add(X o1,Y o2){
    cout<<"Summing data of object X and Y is "<<o1.data+o2.num<<endl;
}
int main (){
    X o1;
    Y o2;
    o1.setData(2);
    o2.setData(4);
    add(o1,o2);
    return 0;
}