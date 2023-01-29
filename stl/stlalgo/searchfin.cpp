#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<string>
#include<list>

using namespace std;

int main(){


            list<int> numbers ;
            numbers.push_back(1);
            numbers.push_back(10);
            numbers.push_back(10);
            numbers.push_back(11);
            numbers.push_back(31);
            numbers.push_back(11);
            numbers.push_back(10);

            //count
            int count = std::count(numbers.begin(),numbers.end(),1);
            std::cout<<count<<std::endl;

            //find
            int no;
            cout<<"\n enter no to find in list";
            cin>>no;
            auto it = std::find(numbers.begin(),numbers.end(),no);

            std::cout<<"----"<<*it<<std::endl;
            if(no==*it){
                std::cout<<"found"<<std::endl;
            }
            else{
                std::cout<<"not found"<<std::endl;
            }








}