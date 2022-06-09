#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[100];
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    for(int i = 0; i < size; i++) cin >> arr[i];
    int key;
    cout << "Enter key to find : ";
    cin >> key;
    cout << linearSearch(arr, size, key);

}