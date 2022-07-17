#include<iostream>
using namespace std;


int main(){
    int arr[] = {1,2,4,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = arr[0];
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    cout << ans;

    return 0;
}