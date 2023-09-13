#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin>>n;
    cin>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Number found at: "<<i<<endl;
            break;
        }
    }
    return 0;
}