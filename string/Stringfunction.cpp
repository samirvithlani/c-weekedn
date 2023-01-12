#include<iostream>
#include<string>

using namespace std;

int main(){

    string name;
    cout<<"\n enter name";
    //space 
    getline(cin,name);
    int x = name.length();
    cout<<"\n length of string is"<<x;
    ///append
    //name.append(" is my name");
    //name.push_back('a');
    name.pop_back();
    cout<<"\n  "<<name;
    //copy
    //string name2 = "hello ";
    //name2.copy(name);
    //cout<<"\n  "<<name2;
    //insert
    name.insert(2,"h");
    cout<<"\n  "<<name;

}
