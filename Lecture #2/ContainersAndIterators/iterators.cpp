#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr={1,2,3,4,5};

    for(auto value:arr){//foreach loop in C++, provided that the data type is dynamic as in it can be anything indicated by auto
        cout<<value<<" ";
    }
    cout<<endl;
    for(int value:arr){
        cout<<value<<" ";
    }
    cout<<endl;

    //you can also take input using a foreach loop
    for(int &value:arr){//&value is a reference to the value in the array, so if you change the value of value, it will change the value in the array
        cin>>value;
    }

    for(auto it=arr.begin();it!=arr.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;

    //you can also take input using an iterator
    for(auto it=arr.begin();it!=arr.end();++it){
        cin>>*it;
    }

    //you can also iterate in the reverse direction
    for(auto it=arr.rbegin();it!=arr.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;

    //you can also iterate in the reverse direction using decrementing iterator
    for(auto it=arr.end()-1;it!=arr.begin()-1;--it){
        cout<<*it<<" ";
    }
    cout<<endl;

    //you can also iterate in the forward direction using the incrementing iterator
    for(auto it=arr.rend()-1;it!=arr.rbegin()-1;--it){
        cout<<*it<<" ";
    }

    auto value=2;//you can do this, it automatically detects the data type


    //auto can't be used for arrays or vectors
    //auto arr[5];//You cannot do this!
    // vector<auto>arr2; You cannot do this for any container!

    //but you can do this
    auto arr2=vector<int>{1,2,3,4,5};

    auto arr3=array<int,5>{1,2,3,4,5};//this is just another way of making arrays same as the option given below, but here <data type,size> notation is used
    auto arr4={1,2,3,4,5};//this is also possible

    

    return 0;
}