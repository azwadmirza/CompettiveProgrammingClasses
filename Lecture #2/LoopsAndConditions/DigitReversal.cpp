#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    while(n>0){
        cout<<n%10;
        n/=10;
    }
    return 0;
    
    // string s=to_string(n); //this function converts a number to string
    // reverse(s.begin(),s.end()); //this function reverses a string
    // cout<<s<<endl;
    
}