#include<bits/stdc++.h>
using namespace std;
int ans(int arr[], int size){
    int sum =0;
    for(int i = 0; i < size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) cin >> arr[i];
    cout << ans(arr, size);

    return 0;
}