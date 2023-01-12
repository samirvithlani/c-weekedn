#include<iostream>
using namespace std;

class Employee{

public:
    int eId;
    char eName[30];

    Employee(int tag){
        cout<<"\n default const";
        eId= 0;

    }
    void addEmployee(){
        cout<<"\n enter employee id";
        cin>>eId;
        cout<<"\n enter employee name";
        cin>>eName;

    }
    void displayEmployee(){

    cout<<"\n employee id"<<eId;
    cout<<"\n employee Name"<<eName;


    }

};

int main(){

    Employee e[3] = {Employee(20),Employee(45),Employee(46)};


    for(int i=0;i<3;i++){
        e[i].addEmployee();
    }

    for(int i=0;i<3;i++){

        e[i].displayEmployee();
    }


}


