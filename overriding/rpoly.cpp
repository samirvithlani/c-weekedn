#include<iostream>

using namespace std;



class Facebook{

public:

    virtual void smile();


};
class A : public Facebook{

public:

    void smile(){
        cout<<"\n a smile....";
    }

};
class B : public Facebook{

public:

    void smile(){

    cout<<"\n b smailr";
    }

};

int main(){


        Facebook *f;
        A a; /// -->child class  --> parent class function
        B b;

        f = &a;
        f = &b;

        f->smile();


}

