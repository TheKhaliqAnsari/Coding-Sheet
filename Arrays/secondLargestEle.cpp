#include<iostream>
using namespace std;



int main(){
    int arr[] = {3,1,5,7,43,73,76};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = arr[0];
    for(int i = 1; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n-1] = first;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
} 