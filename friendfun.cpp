#include<iostream>
using namespace std;

///class function  --> object acess
/// --> class
class Demo{

public:
    int a=10, b=10;
    void sum(){
        cout<<"sum called..."<<a<<"---"<<b;
    }

    void sub();
    friend void evg(Demo d);

};

 void evg(Demo d){

    cout<<"\n friend function called..."<<d.a<<d.b;

}

void Demo :: sub(){

    cout<<"\n a = "<<a<<"b = "<<b;
}

int main(){


    Demo d;
    d.sum();
    d.sub();

    evg(d);


}
