#include <iostream>
using namespace std;
class Employee{
    private:
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of the employee is "<<id<<endl;
        cout<<"And the employee count is "<<count<<endl;
    }
    static void getCount(){
        cout<<"The value of count static variable is "<<count<<endl;
    }
};
int Employee::count=1000;
int main (){
    Employee naksh,sahil,sanjana;
    naksh.setData();
    naksh.getData();
    Employee::getCount();

    sahil.setData();
    sahil.getData();
    Employee::getCount();

    sanjana.setData();
    sanjana.getData();
    Employee::getCount();
    return 0;
}