#include<iostream>
using namespace std;

void arrangeNumbers(int arr[], int size){
    int start = 0, end = size - 1;
    int num = 1;
    while(start <= end){
        if(num % 2 != 0){
            arr[start++] = num++;

        }else{
            arr[end--] = num++;
        }

    }
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

int main(){
    int arr[100];
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    
    arrangeNumbers(arr, size);

    return 0;
}