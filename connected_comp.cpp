
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<bool> vis;

void dfs(int vertex){
    vis[vertex] = true;

    for(int child : graph[vertex]){
        if(!vis[child]){
            dfs(child);
        }
    }
}

int main(){

    int n, m;
    cin >> n >> m;

    graph.resize(n+1);
    vis.resize(n+1, false);

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
