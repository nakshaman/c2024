#include <iostream>
#include <cstring>
using namespace std;
class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){
        cout<<"Bogus code"<<endl;
    }
};
class cwhVideo:public cwh{
    float videolength;
    public:
    cwhVideo(string s,float r, float vl):cwh(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"This is a amazing video with title:- "<<title<<endl;
        cout<<"Rating is:- "<<rating<<endl;
        cout<<"Length of the video is:- "<<videolength<<endl;
    }
};
class cwhtext:public cwh{
    int words;
    public:
    cwhtext(string s,float r, int wc):cwh(s,r){
        words=wc;
    }
    void display(){
        cout<<"This is a amazing text tutorial with title:- "<<title<<endl;
        cout<<"Rating:- "<<rating<<endl;
        cout<<"No of words in this text tutorial:- "<<words<<endl;
    }
};
int main (){

    string title;
    float rating,vl;
    title="Python tutorial";
    int words=78; 
    vl=6.7;
    rating=8.9;

    cwhVideo py(title,rating,vl);
    // py.display();

    cwhtext t(title,rating,words);
    // t.display();

    cwh *tuts[2];
    tuts[0]=&py;
    tuts[1]=&t;
    
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
/*
    # Rules for virtual function
    1.they can't be static
    2.they are accesed by object pointers
    3.virtual functions can be a friend of another class.
    4.A virtual function in base class might not be used.
    5.if a virtual function is defined in a base class, there is no neccesity 
      of redefining it in the derived class.    
*/