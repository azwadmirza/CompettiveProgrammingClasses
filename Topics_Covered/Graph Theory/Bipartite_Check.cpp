#include <bits/stdc++.h>
using namespace std;
bool vis[12];
vector<int>adj[12];
int color[12];

bool isBipartite(int node, int parent)
{
    if(!vis[node]) 
    {
        vis[node]=true; 
        color[node]=!color[parent];
        for(auto x:adj[node])
        {
            if(!isBipartite(x,node)) 
            {
                return false;
            }
        }
    }
    else if(color[node]==color[parent]) 
    {
        return false;
    }
    return true; 
}

int main()
{
    int a,b;
    for(int i=0;i<10;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(isBipartite(1,0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}