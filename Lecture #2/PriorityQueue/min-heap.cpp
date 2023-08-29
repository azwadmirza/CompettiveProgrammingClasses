#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = { 25, 7, 9, 15, 20, 36, 50 };
    priority_queue<int> pq;
    
    // size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        pq.push((-1) * arr[i]);//to make it opposite of max-heap which is default make all
//positive elements negative and vice versa
    }
  
    // multiply all elements with -1 while
    // retrieve the elements
    while (!pq.empty()) {
        cout << (pq.top()) * (-1) << " ";
        pq.pop();
    }
  
    return 0;
}