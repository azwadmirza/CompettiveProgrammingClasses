#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int arr[10];//you can then initialize 10 values like arr4, instead of n replace with 10
    char arr2[10];//instead use string
    int arr3[10]={0,1,2,3,4,5,6,7,8,9};//pre-set the values of the array
    int n;//take input of array size
    cin>>n;
    int arr4[n];//initialize the array of size n
    for(int i=0;i<n;i++){
        cin>>arr4[i];//take input for each array element
    }
    for(int i=0;i<n;i++){
        cout<<arr4[i]<<" ";//print each array element
    }
    //you can also print array elements of arrays that has been initialized at the start
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<" ";
    }
    //another notation for array
    array<int,10>arr5;//this is a fixed size array, you can't change the size of this array
    

    

    return 0;
}