#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<string>
#include<list>

using namespace std;
int main(){

    int a[5]={12,1,30,4,50};
    
    all_of(a,a+5,[](int x){
        return x %2 ==0;
    })?cout<<"all are positive":cout<<"not all are positive";
    
    any_of(a,a+5,[](int x){
        return x %2 ==1;
    })?cout<<"\n all are positive":cout<<"\n not all are positive";

    none_of(a,a+5,[](int x){
        return x %2 ==1;
    })?cout<<"\n all are positive":cout<<"\n not all are positive";

    cout<<endl;
    
    

}