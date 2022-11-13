#include<iostream>
using namespace std;
///ml

class Country{

public:
    int tax = 150;
    void countryData(){
        cout<<"\n country ::";
        cout<<"\n country data = "<<tax;
    }
};

class State :public Country{

public:
    int grant = 450;
    void stateData(){

        cout<<"\n state ::";
        cout<<"\n tax from country  = "<<tax;
        cout<<"\n grant  = "<<grant;
    }

};

class City :public State{

public:
    int amount = 4500;
    void cityData(){

        cout<<"\n city ::";
        cout<<"\n country data = "<<tax;
        cout<<"\n grant from state = "<<grant;
        cout<<"\n amout = "<<amount;
    }

};

int main(){

/*

    City c;
    c.cityData();
    c.stateData();
    c.countryData();
*/
    State s;
    s.stateData();
    s.countryData();
}
