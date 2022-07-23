#include<iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5,6,8};
    int size = sizeof(arr[0])/sizeof(arr);
    int ans = 0;
    for(int i = 1; i <= size + 1; i++){
       ans = ans ^ i;
    }
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    cout << ans;


    return 0;
}