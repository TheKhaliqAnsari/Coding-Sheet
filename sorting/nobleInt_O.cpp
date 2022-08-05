#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        if(arr[i] == n-(i+1)) {
            cout << arr[i];
            break;
            
        }
    }


    return 0;
}