#include<iostream>

using namespace std;

/// return type name param
/// void sum(int a,int b)
/// void sum(int y,int x)

///function overriding  : - parent class function developed in child class
/// with same signature called ....
///JB CG ROAD --> vadapav(int price){"green"}
           ///::
///JB NARANPURA --> vadapav(int price){}

class JB{

public:
    void vadapav(int price){

        cout<<"\n Cg ROAD JB CALLED.,,,";
    }

};
class JB1:public JB{

    public:
    void vadapav(int price){

        cout<<"\n NARANPUR ROAD JB CALLED.,,,";
    }



};
int main(){

    ///
    JB1 j;
    j.vadapav(12);


}


