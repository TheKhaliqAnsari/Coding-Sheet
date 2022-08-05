#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        m[arr[i]++];
    }
    for(auto i : m){
        cout << i.first << " -> " << i.second << endl;
    }
    
}