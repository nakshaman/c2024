/*
    intializtion section or intializtion list is nothing just a way declare constructor arguments
    outisde the curly braces like this 
    constructor name eg.> Test(int i,int j) :a(i),b(j){}
*/
#include <iostream>
using namespace std;
class Test{
    private:
    int a,b;
    public:
    // Test(int i,int j):a(i),b(j)
    // Test(int i,int j):a(i),b(i+j)
    // Test(int i,int j):a(i),b(2*j)
    // Test(int i,int j):a(i),b(a+j)
    Test(int i,int j):b(j),a(i+b)// -->this will create erro because we have declared a first then b 
    // so first will be intiliazie then b in private section of this class
    {};
    void show(void){
        cout<<"Constructor called"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main (){
    Test t(1,2);
    t.show();
    return 0;
}