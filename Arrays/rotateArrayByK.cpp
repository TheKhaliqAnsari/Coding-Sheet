#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,2,9,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // Reverse the array:-
    int start = 0, end = size - 1;
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < size; i++) cout << arr[i] << " ";

   // Reverse element by K
    int k = 3;
    start = 0, end = k - 1;

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    // Reverse element from k to end;
    start = k, end = size - 1;
    while(start <= end){
         int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << endl;
for(int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}