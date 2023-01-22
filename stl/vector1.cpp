#include<iostream>
#include<vector>

using namespace std;

int  main(){

    vector<int> v;
    // v.push_back(15);
    // v.push_back(20);
    // v.push_back(25);
    // v.push_back(78);
    // v.push_back(96);
    // v.push_back(30);
    // v.push_back(39);

    //v.erase(v.begin()+1);
    //v.emplace(v.begin()+1, 100);
    //v.insert(v.begin()+1, 100);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    
    cout<<"\n at"<<v.at(0);
    v.at(0)=100;

    int x = v.front();
    cout<<"\n front: "<<x;
    cout<<"\n front: "<<v.front();

    cout<<"\n back: "<<v.back();

    //cout<<v.data();
    cout<<"\n ..."<<v.empty();

    v.emplace(v.begin()+1, 100);

    v.clear();
    cout<<"\n ..."<<v.empty();
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }




    


}

/*
    push_back() - Adds an element at the end of the vector
    pop_back() - Removes the last element of the vector
    insert() - Inserts new elements before the element at the specified position
    erase() - Removes a single element or a range of elements from the vector
    swap() - Exchanges the content of the vector by the content of other vector of same type and size
    clear() - Removes all the elements of the vector container
    emplace() - Inserts a new element at the position
    emplace_back() - Adds a new element at the end of the vector
    hw assign() - Assigns new elements to the vector by replacing current elements and resizes the container
    size() - Returns the number of elements in the vector
    max_size() - Returns the maximum number of elements that the vector can hold
    capacity() - Returns the size of the storage space currently allocated to the vector expressed as number of elements
    resize() - Resizes the container so that it contains ‘g’ elements
    empty() - Returns whether the container is empty
    shrink_to_fit() - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity
    reserve() - Requests that the vector capacity be at least enough to contain n elements
    at() - Returns a reference to the element at position ‘g’ in the vector
    front() - Returns a reference to the first element in the vector
    back() - Returns a reference to the last element in the vector
    data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements

*/