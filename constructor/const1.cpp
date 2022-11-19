#include<iostream>
using namespace std;
///constructor is a speacial function which has same name as class name
///use:- to initiliza object of class and initilize value of instance variable...
///type of constrctor
/// pram const,,default const....,copy constructor......
/// cpp class 1  -> default con
class Bank{
public:

    ///instance variable....
    int p;
    Bank(){

        cout<<"\n default constuctor...";
        p=100;
    }
    void demo(){

    }

};

int main(){


    ///default con will called...
    Bank b; /// p 1

    //b.demo();

}


