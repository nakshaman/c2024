#include <iostream>
using namespace std;

class complex;

class calculator{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumComplex(complex, complex);
    int sumcompComplex(complex,complex);
};

class complex{
private:
    int a, b;

public:
    // individually declaring functions as friends
    //
    friend int calculator::sumComplex(complex , complex );
    friend int calculator::sumcompComplex(complex ,complex );
    // if you want to declare entire class as friend 
    // friend class calculator;
    void setData(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printData(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumComplex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int calculator::sumcompComplex(complex o1,complex o2){
    return (o1.b+o2.b);
}
int main()
{
    complex o1, o2;
    o1.setData(1, 4);
    o2.setData(5, 7);
    calculator cal;
    int res = cal.sumcompComplex(o1, o2);
    cout << res << endl;
    return 0;
}