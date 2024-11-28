#include <iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
int main (){
    int a= 4,b= 5;
    int sum = product(a,b);
    cout << sum <<endl;
    return 0;
}