#include<iostream>
#include<typeinfo>

using namespace std;

//class template
template <typename T,typename S> class Demo{

    public:
    int x=10;
    float y=10.5;
    Demo(){
        cout<<"Constructor called"<<endl;
    }
    void display(T a,S b){
        // cout<<typeid(a).name()<<endl;
        // cout<<typeid(y).name()<<endl;
        // cout<<typeid(a).name()<<endl;
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
    }
};

int main(){

    Demo <int,int> d;
    Demo <char,int> d1;
    d.display(125,450);
    d1.display('a',789);


}