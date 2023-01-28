#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int>s;
    s.insert(150);
    s.insert(104);
    s.insert(155);
    s.insert(15);
    s.insert(10);
    s.insert(15);


    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    cout<<"\n size of set  ="<<s.size()<<endl;
    cout<<"\n max size of set  ="<<s.max_size()<<endl;
    cout<<"\n empty or not  ="<<s.empty()<<endl;
    //set ->
    //find
    auto postion = s.find(104);
    if(postion!=s.end()){
        
        for(auto it = postion;it!=s.end();it++){
            cout<<*it<<endl;
        }
    }
    else{
        cout<<"\n not found  ="<<endl;
    }

    cout<<"\n count  ="<<s.count(104)<<endl;

}