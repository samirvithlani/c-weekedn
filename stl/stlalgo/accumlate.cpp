#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<string>
#include<list>

using namespace std;

int main(){

    //declare list add 5 emlemts
    std::vector<int> numbers{1,2,3,4,5};
    //accumulate
    int sum = std::accumulate(numbers.begin(),numbers.end(),0);
    std::cout<<sum<<std::endl;
    std::list<string> names;
    names.push_back("Raj");
    names.push_back("Pooja");
    names.push_back("Ajay");
    names.push_back("Neha");

    auto sum1 = std::accumulate(names.begin(),names.end(),std::string(""));
    std::cout<<sum1<<std::endl;






}
