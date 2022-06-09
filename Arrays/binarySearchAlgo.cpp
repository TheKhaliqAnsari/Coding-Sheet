#include<iostream>
using namespace std;

int binarySearchAlgo(int arr[], int size, int key){
    int start = 0, end = size - 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }if(arr[mid] > key){
            end = mid - 1;
        }if(arr[mid] < key){
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[100];
    int size, key;
    cout << "Enter Array Size : ";
    cin >> size;
    for(int i = 0; i < size; i++) cin >> arr[i];
    cout << "Enter key to search : ";
    cin >> key;
    cout << binarySearchAlgo(arr, size, key);
    return 0;
}