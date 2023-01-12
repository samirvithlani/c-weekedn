#include<iostream>
#include<string>
//string class
using namespace std;

int main(){


    char name[30];
    string name1;

    cout<<"\n enter name";
    //for char array we use gets() function
    gets(name);
    // cout<<"name[0] is "<<name[0];
    cout<<"\n enter name1";
    //for string class we use getline() function
    getline(cin,name1);
    // cout<<"name1[0] is "<<name1[0];

    cout<<"\n name is "<<name; 
    cout<<"\n name1 is "<<name1;

}