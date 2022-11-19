///const with inheritance....


#include<iostream>
using namespace std;

class Country{

public:
    int p;
    Country(int tax){
        p = tax;
        cout<<"\n param const of country class....."<<p;
    }
    Country(){
        p = 250;
        cout<<"\n defaul of country,,,"<<p;
    }

};
class State:public Country{

public:
    State():Country(51){
        cout<<"\n default const of state class.....";
    }
    State(int t){

    }
    State(int x,int y){


    }


};


int main(){


    State s;

}
