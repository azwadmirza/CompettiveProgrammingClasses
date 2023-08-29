#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cnt++;
        }
    }
    cout<<x<<" is there "<<cnt<<(cnt==1?" time":" times")<<endl;
}