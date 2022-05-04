#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int size){
    int ans = arr[0];
    for(int i = 0; i < size; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    cout << findUnique(arr, size);
return 0;
}