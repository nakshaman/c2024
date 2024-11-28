#include <iostream>
using namespace std;
// Derived class
class Employee{
    private:
    public:
    int id;
    float salary;
    Employee(int ide){
        id=ide;
        salary=26200;
    }
    Employee(){}
};
/* derived class syntax
   class (derived class name):(visibility mode) base class name 
   Note
    1. default visibility mode is private
    2. Public visibility mode: public members of the base class becomes public members 
      of the derived class
    3. Private visibility mode: public members of the base class becomes private members
      of the derived  class.
    4. In any case private member of the base class can not be inherited
    5. when you create a derived class it automatically calls the 
      base classs constructor
*/
class Programmer : public Employee{
    public:
    int languageCode=7;
    Programmer(int inpid){
        id=inpid;
    }
};
int main (){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer p1(12);
    cout<<p1.id<<endl;
    cout<<p1.languageCode<<endl;
    return 0;
}