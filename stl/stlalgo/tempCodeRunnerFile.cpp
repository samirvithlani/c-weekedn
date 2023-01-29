#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;


int main(){

    vector<string> names;
    names.push_back("Raj");
    names.push_back("Pooja");
    names.push_back("Ajay");
    names.push_back("Neha");
    names.push_back("Amit");
    names.push_back("alit");

    sort(names.begin(),names.end());
    for(string s:names){
        cout<<s<<" ";
    }

    return 0;


}
