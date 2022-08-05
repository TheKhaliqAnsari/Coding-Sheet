#include<bits/stdc++.h>
using namespace std;

void bruteForce(vector<int> v, int n){
    int l = v[n];
    for(int i = 0; i < n - 1; i++){
        if(l > v[i] && l < v[i+1]){
            for(int j = n - 1; j >= 0; j--){
                v[j] = v[j - 1];
            }
            v[i + 1] = l;
            break;
        }
    }
    for(int i = 0; i < n; i++) cout << v[i] << " ";
}

int main(){

    vector<int> v;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }

    bruteForce(v, n);

    return 0;
}