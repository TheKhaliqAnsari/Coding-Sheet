#include<iostream>
#include<queue>
using namespace std;

void singleComponentBFS(bool **graph, int v, bool *visited, int node){
    queue<int> pv;
    pv.push(node);
    visited[node] = true;
    while (!pv.empty()){
        int front = pv.front();
        pv.pop();
        cout << front << " ";
        for(int i = 0; i < v; i++){
            if(graph[front][i] && !visited[i]){
                pv.push(i);
                visited[i] = true;
            }
        }
    }
    
}

void BFS(bool **graph, int v, bool *visited){
    for(int i = 0; i < v; i++){
        if(!visited[i]){
            singleComponentBFS(graph, v, visited, i);
        }
    }
}
// 9 10
// 0 8
// 1 6
// 1 7
// 1 8
// 5 8
// 6 0
// 7 3
// 7 4
// 8 7
// 2 5


int main(){

    int v,e;
    cin >> v >> e;
    bool** graph = new bool*[v];
    for(int i = 0; i < v; i++){
        graph[i] = new bool[v]();
    }

    for(int i = 0, a, b; i < v; i++){
        cin >> a >> b;
        graph[a][b] = true;
        graph[b][a] = true;
    }

    bool* visited = new bool[v];
    for(int i = 0; i < v; i++) visited[i] = false;
    BFS(graph, v, visited);


    return 0;
}