#include <bits/stdc++.h>
using namespace std;

void minNmax(int arr[], int size){
    int min = INT_MAX, max = INT16_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }else if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Min : " << min << " Max : " << max;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) cin >> arr[i];
    minNmax(arr, size);
    return 0;
}