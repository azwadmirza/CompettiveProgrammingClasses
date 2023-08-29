#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int>s={1,2,2,2,2,2,2,3,3,3,3,3,3,3,4,4,4,4,4,4};
    s.erase(2);//removes all occurences of 2
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it=s.find(3);//removes first occurence of 3
    s.erase(it);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}