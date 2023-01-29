#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<string>
#include<list>

using namespace std;

int main(){


    //declare list add 5 string elements
    std::list<string> names;
    names.push_back("Raj");
    names.push_back("Pooja");
    names.push_back("Ajay");
    names.push_back("Neha");
    names.push_back("Prit");



    ///reverse...
    std::reverse(names.begin(),names.end());
    for(string s:names){

        std::cout<<s<<std::endl;
    }








}
