#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"

using namespace std;

bool vis[12];
vector<vector<int>>adj(12,vector<int>(12,0));
vector<int>parent(12,-1);

void dfs(int node,int par /*The par is optional to find parent*/){
    vis[node]=true;
    parent[node]=par;//optional
    for(int i=0;i<=adj[node].size();i++){
        if(adj[node][i]){
            if(!vis[i])dfs(i,node);
        }
    }
}

int main()
{
    fastio;
    int a,b;
    memset(vis,false,sizeof(vis));
    for(int i=0;i<10;i++){
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    dfs(1,0);
    for(int i=1;i<=10;i++){
        cout<<i<<" "<<parent[i]<<"\n";
    }
    return 0;
}