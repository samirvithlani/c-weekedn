#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include<string>

using namespace std;

int main(){

    int arr[]={12,25,45,96,782,3,21};
    sort(std::begin(arr),std::end(arr));

    for(int i:arr){
        cout<<i<<" ";
    }

    list<string> names;
    names.push_back("Raj");
    names.push_back("Pooja");
    names.push_back("Ajay");
    names.push_back("Neha");
    names.push_back("Amit");
    names.push_back("alit");


   names.sort();
    for(string s:names){
         cout<<s<<" ";
    }
    
     return 0;


}