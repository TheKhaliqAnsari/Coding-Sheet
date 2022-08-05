#include<iostream>
using namespace std;



int main(){
    int arr[] = {2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int fXor = arr[0];
    for(int i = 1; i < n; i++){
        fXor = fXor ^ arr[i];
    }
    int sXor = 1;
    for(int i = 2; i <= n + 1; i++){
        sXor = sXor ^ i;
    }
    cout << abs(fXor - sXor);


    return 0;
}