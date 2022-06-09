#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[100];
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    for(int i = 0; i < size; i++) cin >> arr[i];
    bubbleSort(arr, size);
    cout << "Sorted Array : " << endl;
    for(int i = 0; i < size; i++)  cout << arr[i] << " ";

    return 0;
}