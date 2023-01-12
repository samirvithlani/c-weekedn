#include<iostream>

using namespace std;

class Test{

public:
    int x;

    ///t1 x1 =10
    ///t2 x1 =20
    Test(int x1){
        x = x1;
        ///t1 x = 10
        ///t2 x =20
    }

    ///function called....

    bool operator ==(Test t){
    ///t =t2
        cout<<"\n t = "<<t.x;///t2x =10
        cout<<"\n x  ="<<x; ///10
        ///10==20 FALSE
        ///10 == 10 TRUEzz
        if(x==t.x){
               cout<<"\n inside if";
               return true;
        }
        else{
            return false;
        }

    }
};

int main(){

    Test t1(10);///param
    Test t2(10);///param

    /*
    bool ans = t1 == t2;///function ans return ans varia --> true false
    cout<<"\n"<<boolalpha<<ans;
    if(ans ==true){
        cout<<"\n both object matched...";
    }
    else{
        cout<<"\n both are not object matched...";
    }
    */

    if(t1==t2){

        cout<<"\n TRUE";
    }
    ///else
    else{
        cout<<"\n FALSE";
    }


}
