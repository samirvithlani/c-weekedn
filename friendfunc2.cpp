#include<iostream>
using namespace std;

class B; ///defination


class A{

public:
    int x = 100;
    friend int avg(A a,B b);
};

class B{

public:
    int y =200;
    friend int avg(A a,B b);
};

int avg(A a,B b){

    return a.x + b.y;
}

int main(){

    A a;
    B b;

    int ans = avg(a,b);
    cout<<"\n ans = "<<ans;

}
