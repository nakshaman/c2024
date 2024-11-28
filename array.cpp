#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The sum of the marks is :"<<sum<<endl;
    return 0;
}