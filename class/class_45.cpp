/*
    virtual base class:
    if we inherit two classes (test,sports) from 1 base class and then...
    - inherit class from the two class(test,sports) and then result class
    will inherit from both (test,sports) then the variable which is in base class will be inherited
    in both (test,sports) from base class(student) and we are inheriting from both (test,sports)
    to results so results will have two var coming from test,sports class so to solve with ambitguity
    we derive in virtual form so that compiler will get our message to not derive two same things in 
    derived class.
*/
#include <iostream>
using namespace std;
class Student{
    protected:
    int roll_number;
    public:
    void set_roll(int a){
        roll_number=a;
    }
    void print_roll(){
        cout<<"Roll number is "<<roll_number<<endl;
    }
};
class Test:virtual public Student{
    protected:
    float physics,maths;
    public:
    void set_marks(float a,float b){
        physics=a;
        maths=b;
    }
    void print_marks(){
        cout<<"Maths result is "<<maths<<endl;
        cout<<"Physics result is "<<physics<<endl;
    }
};
class Sports:virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"Sports score is "<<score<<endl;
    }
};
class Results:public Test,public Sports{
    private:
    float total;
    public:
    void display(){
        total=(physics+maths+score);
        print_roll();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};
int main (){

    Results s;
    s.set_roll(7);
    s.set_marks(76.8,89.9);
    s.set_score(88);
    s.display();
    
    return 0;
}