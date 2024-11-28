#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void setDataSum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printComplex()
    {
        cout << "Your complex number is " << a << "+i " << b << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);

    c3.setDataSum(c1, c2);

    c3.printComplex();

    return 0;
}