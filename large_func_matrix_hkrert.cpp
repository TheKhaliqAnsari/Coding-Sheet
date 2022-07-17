#include<bits/stdc++.h>
using namespace std;

int primeDivisor(int num){
    
}

int main(){

    int n = 5, m = 5;
    int arr[n][m];
    vector<int> v;
    for(int i =0; i < n; i++){
        for(int j = 0; j < m; j++){
            int data = (i + j + 2);
            arr[i][j] = data;
            v.push_back(data);
        }
    }
    //for(auto i:v) cout << i << " - ";
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        ans = ans + primeDivisor(v[i]);
    }
    return 0;
}