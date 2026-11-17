
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
bool vis[100];

void dfs(int vertex){

    vis[vertex] = true;
    cout << vertex << " ";

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

    for(int i = 0; i < m; i++){
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    dfs(1);
}
