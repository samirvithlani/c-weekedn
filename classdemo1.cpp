#include<iostream>

///small follwed
///studentname

using namespace std;
class Student{

    ///private
    public:
    int id;
    char name[20];

};


int main(){

        ///obejct
        Student stu;
        cout<<"enter student id:";
        cin>>stu.id;
        cout<<"enter student name:";
        cin>>stu.name;


        cout<<"\n student id = "<<stu.id<<"\n student name ="<<stu.name;


}

