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

    //sort(names.begin(),names.end());
    //find max element from vector
    auto max=std::max_element(names.begin(),names.end());
    cout<<*max<<endl;
    //find min element from vector
    auto min=std::min_element(names.begin(),names.end());
    cout<<*min<<endl;

    for(string s:names){
        cout<<s<<" ";
    }

    return 0;


}
