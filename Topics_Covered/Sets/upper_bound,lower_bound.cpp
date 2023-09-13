#include <bits/stdc++.h>
using namespace std;

int main() {
    
    set<int>s={1,2,3,4,5,6,7,8,9,9,9,10};
    cout<<*s.lower_bound(5)<<endl;
    cout<<*s.upper_bound(9)<<endl;
    auto it=s.upper_bound(9);
    it--;
    cout<<*it<<endl;

    return 0;
}