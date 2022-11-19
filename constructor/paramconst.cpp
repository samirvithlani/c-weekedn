#include<iostream>
using namespace std;

class Facebook{

public:
    ///instance variable...
    int friendCount;

    Facebook(int fCount){
        ///local variable...
        ///cout<<"\n param const called...."<<fCount;
          friendCount = fCount;
    }
    int getFriendCount(){

        return friendCount;
    }


};


int main(){

    Facebook raj(10);
    Facebook parth(150);


    int rajc = raj.getFriendCount();
    cout<<"\n rajc ="<<rajc;

    int parthc = parth.getFriendCount();
    cout<<"\n parthc ="<<parthc;
    //cout<<raj.getFriendCount();

}
