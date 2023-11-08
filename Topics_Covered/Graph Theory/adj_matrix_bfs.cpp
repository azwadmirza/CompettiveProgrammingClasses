#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"

using namespace std;

bool vis[12];
vector<vector<int>>adj(12,vector<int>(12,0));
vector<int>dis(12,-1);

void bfs(int node){
    queue<int>q;
    q.push(node);
    vis[node]=true;
    dis[node]=0;
    while(!q.empty()){
        node=q.front();
        q.pop();
        for(int i=0;i<=adj[node].size();i++){
            if(adj[node][i]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                    dis[i]=dis[node]+1;
                }
            }
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
    bfs(1);
    for(int i=1;i<=10;i++){
        cout<<i<<" "<<dis[i]<<"\n";
    }
    return 0;
}