#include<iostream>

using namespace std;

class B;
class C;

class A{

public:

    friend void getAvg(A a,B b,C c);
    int no1 =100;

};
class B{

public:
    friend void getAvg(A a,B b,C c);
    int no2 =200;

};
class C{
public:
friend void getAvg(A a,B b,C c);
    int no3 =100;

};

///101
void getAvg(A a,B b,C c){

    int ans = a.no1 + b.no2 + c.no3;
    cout<<"\n avg = "<<ans/3;
}

int main(){

    ///101
    A a;
    B b;
    C c;
    getAvg(a,b,c);


}
