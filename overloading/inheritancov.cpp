#include<iostream>

using namespace std;
class Parent{

public:

    Parent(int p){

        cout<<"\n parent const...";
    }
    void car(){
        cout<<"\n car";
    }
    void car(char fuel){

        cout<<"\n car with "<<fuel;
    }

};

class Child : public Parent{


public:



    void bike(){

    cout<<"\n bike ";
    }
    void bike(char fuel){

        cout<<"\n bike with "<<fuel;
        car('E');
    }

};

int main(){


        Child c; ///-->default ---> parent class -->  memory
        c.bike('p');

}
