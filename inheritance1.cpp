#include<iostream>
using namespace std;

class Vehicle{

public:
    int makeYear;
    char vehName[30];

};
class Car : Vehicle{

public:

    void getCarData(){
        cout<<"\n enter car Name :";
        cin>>vehName;
        cout<<"\n enter make year :";
        cin>>makeYear;
    }
    //defination
    void printCarData();
    int demo();


};
int Car :: demo(){

}
///scope res oop
void Car :: printCarData(){
        cout<<"\n car Name :"<<vehName;
        cout<<"\n make year :"<<makeYear;
}

class Bike:Vehicle{

public:
 void getBikeData(){
        cout<<"\n enter bike Name :";
        cin>>vehName;
        cout<<"\n enter make year :";
        cin>>makeYear;
    }
    //defination
    void printBikeData();
};

void Bike ::printBikeData(){

        cout<<"\n bike Name :"<<vehName;
        cout<<"\n make year :"<<makeYear;

}

int main(){

    Car c;
    c.getCarData();
    c.printCarData();

    Bike b;
    b.getBikeData();
    b.printBikeData();

}
