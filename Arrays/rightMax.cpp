#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,2,9,1,8, ,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = n - 2; i > 0; i--){
        if(arr[i] > arr[i - 1]){
            arr[i-1] = arr[i];
        }
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " "; 
}