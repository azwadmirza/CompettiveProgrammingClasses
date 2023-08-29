#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int cnt=1;
        if(arr[i]==-1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
                arr[j]=-1;
            }
        }
        cout<<arr[i]<<" is there "<<cnt<<(cnt==1?" time":" times")<<endl;
    }
    // vector<ll>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]==-1){
    //         continue;
    //     }
    //     ll valueToCount=arr[i];
    //     int cnt=count(arr.begin(),arr.end(),valueToCount);
    //     cout<<arr[i]<<" is there "<<cnt<<(cnt==1?" time":" times")<<endl;
    //     replace(arr.begin()+i,arr.end(),valueToCount,ll(-1));
    // }
}