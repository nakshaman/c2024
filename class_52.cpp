#include <iostream>
using namespace std;
class Shop{
    private:
    int id;
    float price;
    public:
    void setData(int a,int b){
        id=a;
        price=b;
    }
    void getData(void){
        cout<<"Id of the item "<<id<<endl;
        cout<<"Price of the item "<<price<<endl;
    }
};
int main (){
    int size=3;
    Shop *ptr=new Shop[size];
    Shop *ptrTemp=ptr; // revise it
    int p;
    float q;
    for(int i=0;i<size;i++){
        cout<<"Enter the id and price of item "<<endl;
        cin>>p;
        cin>>q;
        // *(ptr)->setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    for(int j=0;j<size;j++){
        cout<<"Item number "<<(j+1)<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}