#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr={1,2,3,4,5};
    set<int>s(arr.begin(),arr.end());
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    set<int>s2;
    for(int i=10;i>=0;i--){
        s2.insert(i);
    }
    for(auto it:s2){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>arr2(s2.begin(),s2.end());
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    map<int,int>mp;
    for(int i=0;i<10;i++){
        mp[i]=i;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    vector<pair<int,int>>vp(mp.begin(),mp.end());
    for(int i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
    cout<<endl;

    string s5="hello";
    vector<char>v(s5.begin(),s5.end());
    for(auto v:s5){
        cout<<v<<endl;
    }
    

    return 0;
}