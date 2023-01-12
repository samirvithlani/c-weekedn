#include<iostream>
using namespace std;
class Royal;
class Ahmedabad{

public:

    friend void adminssion(Royal r,Ahmedabad a);
    int b =200;

};



class Royal{
public:
    int x=100;
    void getData(){

        ///without an object access....
        cout<<"\n get data";
        cout<<"\n x = "<<x;

    }
    void data();
    friend void adminssion(Royal r,Ahmedabad a);
};
///scope resolution operator
void Royal :: data(){

    ///roayl r ---> without object
    cout<<"\n data";
    cout<<"\n x"<<x;

}
///scope
void admission(Royal r,Ahmedabad a){

    ///object
    cout<<"\n friend x ="<<r.x;
    cout<<"\n friedn from ahmedbad prop"<<a.b;
}


int main(){


    Royal r;
    ///required object of class...
    r.data();
    r.getData();
    Ahmedabad a;

    ///friend fuunction-->
    admission(r,a);


}
