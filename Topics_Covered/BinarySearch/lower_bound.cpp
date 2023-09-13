#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    //iota essentially fills the array with values from start to end, with a starting number followed by each number being incremented by 1
    iota(arr.begin(),arr.end(),1);//starts with 1
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    auto it=lower_bound(arr.begin(),arr.end(),5);
    cout<<*it<<endl;//gives the value 5
    cout<<it-arr.begin()<<endl;//gives the index of 5

    return 0;
}