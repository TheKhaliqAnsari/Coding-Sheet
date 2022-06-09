#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int size, int key){
    int start = 0, end = size - 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[start] <= arr[mid]){
            if(key >= arr[start] && key <= arr[mid]){
                end = mid - 1;

            }else{
                start = mid + 1;
            }
        }else{
            if(key  >= arr[mid] && key <= arr[end]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
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
    cout << searchElement(arr, size, 30);
    return 0;
}