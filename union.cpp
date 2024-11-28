#include <iostream>
using namespace std;
union currency{
    int rupee;
    float dollar;
    char pounds;
};
int main (){
    union currency e1;
    e1.dollar=44;
    e1.pounds='a';
    // cout<<e1.dollar<<endl;
    cout<<e1.pounds<<endl;
    return 0;
}