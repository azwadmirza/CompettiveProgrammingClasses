#include <bits/stdc++.h>
using namespace std;
bool vis[12];
vector<int>adj[12];
int color[12];

void dfs(int node){
    vis[node]=true;
    for(auto u:adj[node]){
        if(!vis[u]){
            dfs(u);
        }
    }
}



int findNumberOfConnectedComponents(int start,int end){
  int count=0;
  for(int i=start;i<=end;i++){
    if(!vis[i]){
      dfs(i);
      count++;
    }
  }
  return count;
}


int main(void){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout<<findNumberOfConnectedComponents(1,n)<<endl;
    return 0; 
}