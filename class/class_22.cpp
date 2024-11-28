#include <iostream>
using namespace std;

class binary{
    private:
    string s;
    public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary::read(){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary::chk_bin(){
    int truee=1;
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && s[i]!='1'){
            truee=0;
            break;
        }
    }
    if(truee==1){
        cout<<"It is a binary number"<<endl;
    }
    else{
        cout<<"incorrect binary format"<<endl;
    }
}
void binary::ones(){
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            s[i]='1';
        }
        else if(s[i]=='1'){
            s[i]='0';
        }
    }
}
void binary:: display(){
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    cout<<endl;
}
int main (){
    binary b;
    b.read();
    // b.chk_bin();
    b.ones();
    b.display();
    return 0;
}