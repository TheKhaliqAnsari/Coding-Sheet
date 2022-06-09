#include<iostream>
using namespace std;

void merge2sortedarray(int arr1[], int arr2[], int size1, int size2, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i < size1 || j < size2){
        if(arr1[i] <= arr2[j]){
            arr3[k++] = arr1[i++];
        }else if(arr1[i] >= arr2[j]){
            arr3[k++] = arr2[j++];
        }
    }
    while(i < size1){
        arr3[k++] = arr1[i++];
    }
    while(j < size2){
        arr3[k++] = arr2[j++];
    }
}

int main(){
    int arr1[100], arr2[100];
    int size1, size2;
    cout << "Enter Size 1 : " << endl;
    cin >> size1;
    for(int i = 0; i < size1; i++) cin >> arr1[i];
    cout << "Enter Size 2 : " << endl;
    cin >> size2;
    for(int i = 0; i < size2; i++) cin >> arr2[i];
    int arr3[size1 + size2];
    merge2sortedarray(arr1, arr2, size1, size2, arr3);
    cout << "Merged Array : " << endl;
    int size3 = size1 + size2;
    for(int i = 0; i < size3; i++) cout << arr3[i] << " ";

    return 0;
}