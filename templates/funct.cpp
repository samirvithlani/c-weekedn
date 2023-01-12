#include<iostream>

using namespace std;

template <typename T> T demo2(T a){


    cout<<"Value of a is: "<<a<<endl;

    return a;

}
template <typename T> void demo3(T x){
    cout<<"Value of x is: "<<x<<endl;
}

demo(int a){

    cout<<"Value of a is: "<<a<<endl;
    return 15;
}

int main(){


    demo(125);
    demo2("mmmm");
    demo3("mmmmmkjhhuihiohooh");
    //cout<<"p "<<p;

}