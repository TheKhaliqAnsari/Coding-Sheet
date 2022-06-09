#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    // Base Case ->
    if(size == 0 || size == 1){
        return true;
    }
     // Small calculation ->
    if(arr[0] > arr[1]) return false;

    // Recursive calls ->
    bool isTrue = isSorted(arr + 1, size - 1);
   return isTrue;




}

int main(){
    int size;
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++) cin >> arr[i];
    cout << isSorted(arr, size);

    return 0;
}