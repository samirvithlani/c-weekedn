#include<iostream>
using namespace std;

class Shape{

public:
    int x;
    Shape(int a){

        /// 100 s1
        /// 200 s2
        x = a;
    }
    ///s1
    ///s2
    void operator +(Shape s){

        ///x is access using s object from param
        cout<<"\n s = "<<s.x;
    }

};
int main(){

    ///param const
    Shape s1(100);
    Shape s2(200);
    /// + operator function calle-d....
    s1 + s2;


}
