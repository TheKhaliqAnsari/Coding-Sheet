#include<iostream>
#include<cmath>
using namespace std;

int maxEle(int arr[], int size){
    int ans = INT16_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}

int minEle(int arr[], int size){
    int ans = INT16_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) cin >> arr[i];
    int first = 0, secondFirst = 0;
    int min = minEle(arr, size);
    int max = maxEle(arr, size);
    int minIndex = -1;
    int maxIndex = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] == min){
            minIndex = i;
        }
        if(arr[i] == max){
            maxIndex = i; 
        }
    }
    cout << abs(minIndex - maxIndex) + 1;
}