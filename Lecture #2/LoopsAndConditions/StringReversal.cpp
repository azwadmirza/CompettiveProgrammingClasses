#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;
    int s_len=s.length();
    for(int i=s_len-1;i>=0;i--){
        cout<<s[i];
    }
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;
    return 0;
}