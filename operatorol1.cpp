///overloading ---> same name of function with diff params search(int),search(int float)
/// +
///op ol -->+ function
///unery op ol ++ --''
#include<iostream>
using namespace std;

class Demo{

public:

    int x=10;
    void operator --(){

        cout<<"\n -- operator function called...";
        ///x--;
        ///x++;
        ///x = 500;

    }
    /*
    void operator ++(){

        cout<<"\n ++ operator function called...";
    }
    */

    int operator ++(){

        return 100;
    }

};
int main(){


    Demo d;
    //--d;
    int p = ++d;
    cout<<"\n p = "<<p;
}
