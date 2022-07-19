#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;
    void addEdges(int u, int v, bool dir){
        adj[u].push_back(v);
        if(dir == 0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i:adj){
            cout << i.first << "->";
            for(auto j : i.second){
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main(){
    int n;
    cout << "Enter number of node : " << endl;
    cin >> n;
    int m;
    cout << "Enter number of edges : " << endl;
    cin >> m;
    graph g;
    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        g.addEdges(u,v, 0);
    }
    g.printAdjList();
    
    return 0;
}