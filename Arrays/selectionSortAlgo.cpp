#include<iostream>
using namespace std;


void selectionSort(int arr[], int size){
    
    for(int i = 0; i < size - 1; i++){
        int min = arr[i], minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < min){
                min = arr[j];
                minIndex = j;
            }
        }
        // Swap ->
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){
    int arr[100];
    int size;
    cout << "Enter array size : ";
    cin >> size;
    for(int i = 0; i < size; i++) cin >> arr[i];
    selectionSort(arr, size);
    cout << "Sorted Array : " << endl;
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}