#include <iostream>
using namespace std;
// destructor never takes an argument nor does it return any value
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main (){
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first objects n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main function()"<<endl;
    return 0;
}