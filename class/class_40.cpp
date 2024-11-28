/*
    if we are inheriting B from A and C from B [A-->B-->C]
    1. A is the base class for B and B is the base class for C
    2. A-->B-->C is called inherit path
*/
#include <iostream>
using namespace std;
class Student{
    protected:
    int roll_number;
    public:
    void set_rollNumber(int);
    void get_rollNumber(void);
};
void Student::set_rollNumber(int r){
    roll_number=r;
}
void Student::get_rollNumber(void){
    cout<<"The roll number of student is "<<roll_number<<endl;
}
class Exam:public Student{
    protected:
    float maths;
    float physics;
    public:
    void setMarks(float,float);
    void getMarks();
};
void Exam::setMarks(float a,float b){
    maths=a;
    physics=b;
}
void Exam::getMarks(){
    cout<<"The marks in maths is "<<maths<<endl;
    cout<<"The marks in physics is "<<physics<<endl;
}
class Results:public Exam{
    protected:
    float percentage;
    public:
    void display(){
        get_rollNumber();
        getMarks();
        cout<<"Your percentage is "<<(physics+maths)/2<<endl;
    }
};
int main (){
    Results r;
    r.set_rollNumber(7);
    r.setMarks(79,89);
    r.display();
    return 0;
}