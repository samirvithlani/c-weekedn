#include<iostream>
#include<list>
#include<string>

using namespace std;


int main(){


    list <string> l;
    l.push_back("raj"); //0
    l.push_back("ram"); //1
    l.push_back("parth");
    l.push_back("neha");
    l.push_back("jay");


    l.pop_back();
    l.pop_front();






    // string name = "helllo this is";
    // for(auto x:name){
    //     cout<<"\n"<<x;
    // }

    //foreach....
    for(string name:l){
        cout<<"\n"<<name;
    }

    //iterator





}
