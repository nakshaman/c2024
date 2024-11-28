// #include <iostream>
// // using namespace std;
// int main (){
//     std::cout<<"Hello World"<<std::endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int glo=7;
void sum(){
    cout<<glo<<endl;
}
int main (){
    int glo=8;
    cout<<glo<<endl;    
    sum();
    cout<<glo<<endl;    
    return 0;
}