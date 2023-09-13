#include <bits/stdc++.h>
using namespace std;
//outside the functions(main), this region is called the global scope
int n;
int arr[n];//global arrays need a fixed size
int arr[10];//this is okay

int main() {
    //inside a function, main, this region is called  the local scope, you would understand more about functions later
    cin>>n;//the mistake is here, the global array cannot be initialized with n beforehand
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}