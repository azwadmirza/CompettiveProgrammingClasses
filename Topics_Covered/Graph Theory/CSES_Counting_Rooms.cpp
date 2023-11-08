#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int dirx[] = {-1,0, 0, 1};
int diry[] = {0,-1, 1, 0};
int n, m;
char grid[1005][1005];
bool visited[1005][1005];

bool isValid(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y])
    {
        return true;
    }
    else
    {
        return false;
    }
}


void bfs(int sx,int sy){//2D bfs
    queue<pair<int,int>>q;
    q.push({sx,sy});
    visited[sx][sy]=true;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            if(isValid(x+dirx[i],y+diry[i])){
                q.push({x+dirx[i],y+diry[i]});
                visited[x+dirx[i]][y+diry[i]]=true;
            }
        }
    }
}

int main()
{
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int cnt = 0;
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '.')
            {
                bfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}