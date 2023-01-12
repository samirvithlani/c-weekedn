#include<iostream>
using namespace std;

void add(int a){

    cout<<"\n value of a ="<<a;
}
void sum(int a=0,int b=0,int c=0){

    cout<<"\n a = "<<a;
    cout<<"\n b = "<<b;
    cout<<"\n c = "<<c;
}

int main(){

    add(10);
    sum(10,12,14);

}
