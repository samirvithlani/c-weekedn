#include<iostream>
using namespace std;
class TRAI{

public:

    virtual void call();
    void mms(){
        cout<<"\n mms ";
    }

};

class JIO:public TRAI{

public:

    void call(int a){

        cout<<"jio called...";
    }
};


int main()
{


    JIO j;
    j.call();
    j.mms();

    ///t.call();
}
