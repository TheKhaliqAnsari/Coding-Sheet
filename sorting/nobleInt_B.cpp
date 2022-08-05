#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,2,4,8,10};
    //1 2 3 3
    int size = 5;
    sort(arr, arr + size);
    int count;
    for(int i = 0; i < size - 1; i++){
        count = 0;
        for(int j = i + 1; j < size; j++){
            if(arr[i] < arr[j]){
                count++;
            }
        }
        if(arr[i] == count){
            cout << arr[i];
            break;
        }
    }
}