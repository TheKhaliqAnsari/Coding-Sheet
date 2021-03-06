#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key){
            return mid;
        } if(arr[mid] > key){
            end = mid - 1;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) cin >> arr[i];
    cout << binarySearch(arr, size, 5);
    return 0;
}