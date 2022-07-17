#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[], int size){
    if(size == 1 || size == 0) return true;
    if(arr[size - 1] < arr[size - 2]) return false;
    bool is_small_sorted = is_sorted(arr, size - 1);
    return is_small_sorted;
}

int main(){

    int arr [] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << is_sorted(arr, size);

    return 0;
}