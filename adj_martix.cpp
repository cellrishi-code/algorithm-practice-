#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m ;
    cin>>n>>m;
    int graph[n+1][n+1]={};
    for(int i =0 ; i<m ; i++){
        int v1 , v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    // Printing the adjacency matrix
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }


}
