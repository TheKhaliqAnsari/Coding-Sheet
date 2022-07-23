#include<iostream>
using namespace std;
int unique(int arr[], int size){
    int res = arr[0];
     for(int i = 1; i < size; i++){
        res = res ^ arr[i];
     }
    return res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >>arr[i];

    cout << unique(arr, n);
    return 0;
}