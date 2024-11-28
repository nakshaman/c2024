#include <iostream>
using namespace std;
class X{
    private:
    int a;
    public:
    void setData(int a){
        this->a=a; // this means for whatever object setData member function is runnig
        // set it a who is the local variable here that is (int a) here
        // this is pointer who is pointing to a 
    }
    void getData(void){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main (){
    // this is a keyword which is a pointer which points to the object which invokes the
    // member function
    X a;
    a.setData(7);
    a.getData();
    return 0;
}