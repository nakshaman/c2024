#include <iostream>
using namespace std;
int main (){
    int digit;
    cin>>digit;
    int sum=0;
    int reverse;
    while(digit>0){
        reverse=digit%10;
        sum+=reverse;
        digit=digit/10;
    }
    cout<<sum<<endl;
    return 0;
}