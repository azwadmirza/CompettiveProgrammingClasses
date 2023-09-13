#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin>>n;
    cin>>x;
    vector<pair<long long,long long>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    int l=0;
    int r=n-1;
    bool found=false;
    long long ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid].first==x){
            found=true;
            ans=arr[mid].second;
            break;
        }
        if(arr[mid].first<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(!found){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at: "<<ans<<endl;
    }
    return 0;
}