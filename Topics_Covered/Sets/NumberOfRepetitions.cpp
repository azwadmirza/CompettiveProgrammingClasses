#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin>>n;
    multiset<ll>s;
    ll x;
    cin>>x;
    for(int i=0;i<n;i++){
        ll x;//there is an x outside but this still works, as its in a block scope and the other x is outside the block scope
        cin>>x;
        s.insert(x);
    }
    auto it=s.upper_bound(x);
    it--;
    int cnt=0;
    while(*it==x){
        cnt++;
        it--;
    }
    cout<<x<<" is there "<<cnt<<(cnt==1?" time":" times")<<endl;
    return 0;
}