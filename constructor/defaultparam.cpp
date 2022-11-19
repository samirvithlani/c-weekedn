#include<iostream>
using namespace std;

class Phone{

public:

    int battryper;
    Phone(){

        battryper = 45;
    }

    Phone(int btrper){

        battryper = btrper;

    }

    int getBattryPtr(){

        return battryper;
    }

};

int main(){

    ///default const...
    Phone p1(85);
    cout<<p1.getBattryPtr();
    Phone p2(78);
    cout<<"\n"<<p2.getBattryPtr();

}
