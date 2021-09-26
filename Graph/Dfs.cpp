#include <iostream>
#include <bits/stdc++.h>

using namespace std;


const int N  = 1000;
int n,m;
vector<int> adj[N];
int vis[N];


void dfs(int u){
    
}

int main(){
    cin>>n>>m;
    for (int i = 1; i <=m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(u);
        adj[v].push_back(v);
    }
    memset(vis, 0, sizeof(vis));

}