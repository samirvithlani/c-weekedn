#include<iostream>
#include<list>
#include<string>
#include<iterator>

using namespace std;


int main(){


    list <string> l;
    l.push_back("raj"); //0 
    l.push_back("ram"); //1
    l.push_back("parth");
    l.push_back("neha");
    l.push_back("jay");
    l.push_back("parth");
    

    //l.pop_back();
    //l.pop_front();
    
    //
    list<string>::iterator it = l.begin();
    advance(it, 2); //2
    l.insert(it, "hello");
    
    
    // string name = "helllo this is";
    // for(auto x:name){
    //     cout<<"\n"<<x;
    // }

    //foreach....
    // for(string name:l){
    //     cout<<"\n"<<name;
    // }

    //0
    // end -->size
    // [] ---> pointer ---> itr --> l
    for(list<string>::iterator it = l.begin(); it!=l.end(); it++){
        cout<<"\n"<<*it;
    }

    //remove..
    //l.remove("parth");
    //l.remove_if([](string x){return x.length()>3;});
    list<string>::iterator it1 = l.begin();
    advance(it1, 2);
    list<string>::iterator it2 = l.begin();
    advance(it2, 5);
    l.erase(it1, it2);

    cout<<"\n after erase";
     for(list<string>::iterator it = l.begin(); it!=l.end(); it++){
        cout<<"\n"<<*it;
    }



    //iterator





}
