#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
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
}