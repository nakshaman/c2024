#include <iostream>
using namespace std;
class multiple;
class add{
    private:
    int a,b;
    public:
    friend int multiple ::multiples(add,add);
    void setData(int x,int y){
        a=x;
        b=y;
    }
};
class multiple{
    public:
    int multiples(add x,add y);
};
void add(){
    cout<<"Sum is "<<add.a+add.b<<endl;
}
int main (){
    add aman;
    aman.setData(1,2);
    aman.printData();

    return 0;
}