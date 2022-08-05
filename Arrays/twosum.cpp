#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        v.push_back(data);
    }
    int key;
    cout << endl << "Enter Key : " << endl;
    cin >> key;
    unordered_map<int, int> umap;
    for(int i = 0; i < size; i++){
        int target = key - v[i];
        if(umap.find(target) != umap.end()){
            cout << umap[target] << " " << i;
        }
        umap[v[i]] = i;
    }
    

    return 0;
}