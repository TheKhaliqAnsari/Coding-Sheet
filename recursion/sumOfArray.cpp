#include<iostream>
using namespace std;

int ans(int arr[], int n){
    if(n == 1) return 1;
    int s = ans(arr, n - 1);
    return s + n;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    cout << ans(arr, n);
    return 0;
}