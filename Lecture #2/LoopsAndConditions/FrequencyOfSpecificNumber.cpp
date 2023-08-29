#include <bits/stdc++.h>
using namespace std;
typedef long long ll; // makes a type of long long abbreviated to ll

int main()
{
    int n;
    cin >> n;
    ll x;
    cin >> x;
    ll arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            cnt++;
        }
    }
    cout << x << " is there " << cnt << (cnt == 1 ? " time" : " times") << endl;
    // cin>>x;
    // vector<ll>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // ll ans=count(arr.begin(),arr.end(),x);
    // cout<<x<<" is there "<<ans<<(ans==1?" time":" times")<<endl;
}