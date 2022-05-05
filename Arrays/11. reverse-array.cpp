#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int size)
{
    // Iterative wat
    int i = 0, j = size - 1;
    while(i <= j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    //using STL
    // reverse(arr, arr + size);
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
 }

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    reverseArray(arr, size);
    return 0;
}