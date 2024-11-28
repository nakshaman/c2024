/*
    #abstract base class is class which is designed in a way that we derive classes from it
    #abstract base class is not for making objects
    #abstract base class is a class which has atleast one pure virtual function
    which should be redefined
*/
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
    virtual void display()=0; // do-nothing function --> pure virtual function
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

    cwhtext t(title,rating,words);

    cwh *tuts[2];
    tuts[0]=&py;
    tuts[1]=&t;
    
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
