#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int>s;//you can also insert characters, floats, bools, strings, etc. in a set, even sets inside sets, 
    //or vectors inside sets, or even arrays inside sets or even maps(we will see maps later)
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    //remove elements from a set
    s.erase(1);//erases the element 1 from the set
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    //check if an element is present in the set
    if(s.find(2)!=s.end()){//if 2 is present in the set
        cout<<"2 is present in the set"<<endl;
    }
    else{
        cout<<"2 is not present in the set"<<endl;
    }

    auto it=s.find(2);
    //erase using iterator
    s.erase(it);//erases the element 2 from the set
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;

    //check if a set is empty
    if(s.empty()){
        cout<<"Set is empty"<<endl;
    }
    else{
        cout<<"Set is not empty"<<endl;
    }

    //size of the set
    cout<<s.size()<<endl;

    //clear the set
    s.clear();
    if(s.empty()){
        cout<<"Set is empty"<<endl;
    }
    else{
        cout<<"Set is not empty"<<endl;
    }

    cout<<s.size()<<endl;
    set<int>s1={1,2,3};
    set<int>s2={3,4,5};
    set<int>union_operation;
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(union_operation,union_operation.begin()));
    for(auto it:union_operation){
        cout<<it<<" ";
    }

    cout<<endl;

    set<int>intersection_operation;
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(intersection_operation,intersection_operation.begin()));

    for(auto it:intersection_operation){
        cout<<it<<" ";
    }
    cout<<endl;

    set<int>difference_operation;
    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(difference_operation,difference_operation.begin()));
    for(auto it:difference_operation){
        cout<<it<<" ";
    }
    cout<<endl;

    set<int>difference_operation2;
    set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),inserter(difference_operation2,difference_operation2.begin()));
    for(auto it:difference_operation2){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}