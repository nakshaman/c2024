#include <iostream>
#include <math.h>
using namespace std;
class Point{
    private:
    int a,b;
    public:
    friend void res(Point o1,Point o2);
    Point(int x,int y){
        a=x;
        b=y;
    }
    void display(void){
        cout<<"The point is ("<<a<<" ,"<<b<<")"<<endl;
    }
};
void res(Point o1,Point o2){
    float ans= sqrt(pow(o2.a-o1.a,2)+pow(o2.b-o1.b,2));
    cout<<ans<<endl;
}
int main (){
    Point o1(1,1);
    o1.display();
    Point o2(4,6);
    o2.display();
    res(o1,o2);
    return 0;
}