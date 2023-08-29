#include <bits/stdc++.h>
using namespace std;

int main() {


    vector<int>v;//this vector is initially empty and will grow dynamically
    

    //to get the size of vector, you can use
    cout<<v.size()<<endl;


    //you can also use the swap() function to swap two vectors
    vector<int>v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);

    swap(v,v2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //you can also use the reverse() function to reverse a vector
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //you can also use the sort() function to sort a vector
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //you can also sort the vector in descending order
    sort(v.rbegin(),v.rend());//reverse begin and reverse end
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //you can also use the find() function to find a specific element in a vector
    auto it=find(v.begin(),v.end(),5);
    cout<<*it<<endl;
    //find index of 5
    cout<<it-v.begin()<<endl;

    //you can also swap to specific elements
    swap(v[0],v[1]);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //you can also find the maximum element of the vector
    auto it2=max_element(v.begin(),v.end());
    cout<<*it2<<endl;

    //you can also find the index of the maximum element
    cout<<it2-v.begin()<<endl;

    //you can also find the minimum element of the vector
    auto it3=min_element(v.begin(),v.end());
    cout<<*it3<<endl;
    
    //you can also find the index of the minimum element
    cout<<it3-v.begin()<<endl;

    return 0;
}