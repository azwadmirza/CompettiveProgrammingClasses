#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    vector<pair<ll, ll>> vp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        vp.emplace_back(a, b);
    }
    sort(vp.begin(), vp.end());
    int required_rooms = 1;
    priority_queue<ll> pq;
    pq.emplace(-vp[0].second);
    for (int i = 1; i < n; i++)
    {
        int current_start=vp[i].first;
        int earliest_end=vp[i].second;
        if(current_start>=-pq.top()){
            pq.pop();
        }
        pq.emplace(-earliest_end);
    }
    cout << pq.size() << endl;

    return 0;
}