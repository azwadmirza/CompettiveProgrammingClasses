#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int n;
    cin>>n;
    vector<int>arr={1,2,2,2,3,3,3,4,4,4,4,4,5,5,5};

    //the array: 1 2 2 2 3 3 3 4 4 4 4  4  5  5  5
    //the index: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
    cout<<arr.size()<<endl;

    auto it=lower_bound(arr.begin(),arr.end(),4);
    cout<<*it<<endl;//gives the value 4
    cout<<it-arr.begin()<<endl;//gives the index of 4
    //so we see that lower bound returns the first occurence of 4
    auto it2=upper_bound(arr.begin(),arr.end(),4);
    cout<<*it2<<endl;//gives the value 5
    cout<<it2-arr.begin()<<endl;//gives the index of first occurence of 5
    //we see the upper bound gives the value of 1 index after the last occurence of 4

    //so we see that upper bound returns the last occurence of 5

    //but what if the number is not present
    auto it3=lower_bound(arr.begin(),arr.end(),6);
    cout<<*it3<<endl;//doesn't give a value in the vector
    cout<<it3-arr.begin()<<endl;//gives essentially the size of the vector. or one index after the final index

    auto it4=upper_bound(arr.begin(),arr.end(),6);
    cout<<*it4<<endl;//doesn't give a value in the vector
    cout<<it4-arr.begin()<<endl;//gives essentially the size of the vector. or one index after the final index

    //apply lower_bound to sorted vectors, unsorted vectors may give wrong results
    //apply upper_bound to sorted vectors, unsorted vectors may give wrong results
    vector<int>arr2={4,4,4,4,4,5,5,5,1,2,2,2,3,3,3};
    auto it5=lower_bound(arr2.begin(),arr2.end(),2);
    cout<<*it5<<endl;//gets 4 instead
    cout<<it5-arr2.begin()<<endl;//gets the index of first occurence of 4 instead

    auto it6=upper_bound(arr2.begin(),arr2.end(),2);
    cout<<*it6<<endl;//gets 4 instead
    cout<<it6-arr2.begin()<<endl;//gets the index of first occurence of 4 instead
    

    return 0;
}