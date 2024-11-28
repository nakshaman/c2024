#include <iostream>
using namespace std;
// static variable means this will intialize only once after that it will 
// increment or decrement acc to the instruction
int product(int a,int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}
int main (){
    int a= 2,b= 1;

    int sum = product(a,b);
    cout << sum <<endl;
    sum = product(a,b);
    cout << sum <<endl;
    sum = product(a,b);
    cout << sum <<endl;
    sum = product(a,b);
    cout << sum <<endl;

    return 0;
}