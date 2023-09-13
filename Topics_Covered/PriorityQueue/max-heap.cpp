#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = { 25, 7, 9, 15, 20, 36, 50 };
    priority_queue<int> pq;
    
    // size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }
  
    // multiply all elements with -1 while
    // retrieve the elements
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
  
    return 0;
}