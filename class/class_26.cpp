#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex sumComplex(complex o1, complex o2);
    void printNum()
    {
        cout << "Your number is " << a << " +" << b << " i" << endl;
    }
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNum();
    c2.setNumber(5, 8);
    c2.printNum();
    sum = sumComplex(c1, c2);
    sum.printNum();
    return 0;
}

/* friend function -
 1. Not in the scope of class
 2. since it is not in the scope of the class,it cannot be called from the object of
 that class c1.sumcomplex()- won't work
 3. can be invoked without the help of any object
 4. usually contains objects as the arguments
 5. friend declartion can be done in public or private part
 6. it can not access the members directly by their names and need object name.
 member_name to access any member.

*/