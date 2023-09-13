#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char>stk;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(stk.empty()){
            stk.push(s[i]);
        }
        else{
            if(stk.top()=='(' && s[i]==')'){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
    }
    if(stk.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}