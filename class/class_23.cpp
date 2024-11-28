#include <iostream>
using namespace std;
class Shop{
    private:
    int itemNo[100];
    int itemPrice[100];
    int counter;
    public:
    void setPrice(void);
    void displayPrice(void);
    void count(){
        counter=0;
    }
};
void Shop:: setPrice(){
    cout<<"Enter the item no of counter:"<<counter+1<<endl;
    cin>>itemNo[counter];
    cout<<"Enter the price of counter no:"<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop:: displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<"The price of item id "<<itemNo[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main (){
    
    Shop mugdal;
    mugdal.count();
    mugdal.setPrice();
    mugdal.setPrice();
    mugdal.setPrice();
    mugdal.displayPrice();
    return 0;
}