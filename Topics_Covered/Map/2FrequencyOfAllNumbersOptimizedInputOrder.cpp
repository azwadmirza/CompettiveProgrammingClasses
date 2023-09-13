#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>0){
            cout<<arr[i]<<" is there "<<mp[arr[i]]<<(mp[arr[i]]==1?" time":" times")<<endl;
            mp[arr[i]]=0;
        }
    }
}