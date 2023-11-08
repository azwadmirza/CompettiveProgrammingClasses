#include <bits/stdc++.h>
using namespace std;
bool vis[12];
vector<int>adj[12];
int color[12];

bool dfs(int node, int parent){
    vis[node] = true;
    for(int child : adj[node]){
        if(!vis[child]){
            if(dfs(child, node)){
                return true;
            }
        }
        else if(child != parent){
            return true;
        }
    }
    return false;
}

bool isCyclic(){
    memset(vis, false, sizeof(vis));
    for(int i=1;i<=10;i++){
        if(!vis[i]){
            if(dfs(i, -1)){
                return true;
            }
        }
    }
    return false;
}



int main()
{
    int a,b;
    for(int i=0;i<10;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(isCyclic()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}