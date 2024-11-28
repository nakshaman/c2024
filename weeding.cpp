#include <bits/stdc++.h>
using namespace std;

struct approve{
    string name[5];
    int age[5];
}typedef approve;

int main (){
    approve p1;
    for(int i=0;i<5;i++){
        cin>>p1.age[i];
        cin>>p1.name[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        if(p1.age[i]>18){
            cout<<p1.name[i]<<endl;
        }
    }
    return 0;
}