#include<iostream>
using namespace std;

void print(int **edges, int n, int sv, bool* visited){
    cout << sv << endl;
    visited[sv] = true;
    for(int i = 0; i < n; i++){
        if(i == sv) continue;
        if(edges[sv][i] == 1) {
            if(visited[i]){
                continue;
            }
            print(edges, n, i, visited);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int **edges = new int*[n];
    // dynamic 2d matrix with 0;
    for(int i = 0; i < n; i++){
        edges[i] = new int[n];
        for(int j = 0; j < n; j++){
            edges[i][j] = 0;
        }
    }
    // for edges
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        edges[u][v] = 1;
        edges[v][u] = 1;
    }
    bool *visited = new bool[n];
    for(int i = 0; i < n; i++) visited[i] = false; 
    print(edges, n, 0, visited);
}