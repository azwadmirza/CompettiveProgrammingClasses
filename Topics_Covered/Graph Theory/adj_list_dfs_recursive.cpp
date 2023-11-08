#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"

using namespace std;

bool vis[12];
//adjacency list
vector<int>v[12];//every element of the array is a vector of pairs
vector<int>parent(12,-1);

void dfs(int node,int par /*The par is optional to find parent*/){
    vis[node]=true;
    parent[node]=par;//optional
    for(auto u:v[node]){
        if(!vis[u]){
            dfs(u,node);
        }
    }
}

int main()
{
    fastio;
    int a,b;
    /*
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(1);
    */
    for(int i=0;i<10;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);//undirected
    }
    dfs(1,0);
    for(int i=1;i<=10;i++){
        cout<<i<<" "<<parent[i]<<"\n";
    }
    return 0;
}