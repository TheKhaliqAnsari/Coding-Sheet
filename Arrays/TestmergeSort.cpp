#include <iostream>
using namespace std;
void merge2SortedArr(int arr[], int start, int mid, int end){
    int newArr[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            newArr[k++] = arr[i++];
        }else{
            newArr[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        newArr[k++] = arr[i++];
    }
    while (j <= end)
    {
        newArr[k++] = arr[j++];
    }
    int a = 0;
    for(int i = start; i <= end; i++) arr[i] = newArr[a++];
}

void mergeSortAlgo(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start + end)/2;
    mergeSortAlgo(arr, start, mid);
    mergeSortAlgo(arr, mid + 1, end);
    merge2SortedArr(arr, start, mid, end);
}

void mergeSort(int arr[], int size){
    if(arr[0] == '\0'){
        return;
    }
    mergeSortAlgo(arr, 0, size - 1);
}


int main(){
    int size;
    cout << "Enter Size : " << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter elements : " << endl;
    for(int i = 0; i < size; i++) cin >> arr[i];
    mergeSort(arr, size);    
    cout << "Sorted Array : " << endl;
    for(int i = 0; i < size; i++) cout << arr[i] << " ";

    return 0;
}