#include<iostream>

using namespace std;

class Amazone{

public:

        void search1(){

            cout<<"\n search default ::";
        }

        void search1(int price){

            cout<<"\n search with price"<<price;
        }
        void search1(float price){

            cout<<"\n search with price float"<<price;
        }
        void search1(long price){

            cout<<"\n search with long price"<<price;
        }

        void search1(int price,bool status){

            cout<<"\n search with price"<<price <<"and availablity"<<status;
        }



};

int main(){


    Amazone a;
    a.search1(100);
    a.search1(100);
    a.search1(10000);a.search1(10);
    ///a.search1(1500,1);


}


