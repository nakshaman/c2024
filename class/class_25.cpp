#include <iostream>
using namespace std;
class Employee{
    private:
    int id;
    int salary;
    public:
    void setId(void){
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of the employee is "<<id<<endl;
    }
};
int main (){
    Employee fb[5];
    for(int i=0;i<5;i++){
        fb[0].setId();
        fb[0].getId();
    }
    return 0;
}