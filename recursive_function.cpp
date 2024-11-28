#include <iostream>
using namespace std;
int fact(int x){
    if(x<=1){
        return 1;
    }
    return x*fact(x-1);
}
int main (){
    int n;
    cin>>n;
    int ans = fact(n);
    cout << ans << endl;
    return 0;
}