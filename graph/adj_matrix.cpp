#include<iostream>
using namespace std;

void printAdjMatrix(int adj[][n+1], int n, int sv){
    cout << sv << endl;
    for(int i = 0; i < n; i++){
        if(i == sv) continue;
        if(adj[sv][i] == 1){
            printAdjMatrix(adj, n, i);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    int adj[n + 1][n + 1];

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}