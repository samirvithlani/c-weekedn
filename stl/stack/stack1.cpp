#include<iostream>
#include<stack>

using namespace std;

int main(){


    stack<int> s;
    s.push(1);
    s.push(11);
    s.push(13);
    s.push(15);


    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    // //true false
    // cout<<s.size()<<endl;
    // cout<<".."<<s.empty();

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}