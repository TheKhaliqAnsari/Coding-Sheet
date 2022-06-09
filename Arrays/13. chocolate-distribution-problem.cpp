#include <bits/stdc++.h>
using namespace std;
//7,3,2,4,9,12,56
//2 3 4 7 9 12 56
int chocoDistribution(int arr[], int size, int m){
    if(size == 0 || m == 0)
        return;
    if(size < m)
        return;
    sort(arr, arr + size);
    int min_diff = INT_MAX;
    for(int i = 0; i + m - 1 < size; i++){
        int ans = arr[i + m - 1] - arr[i];
        if(ans < min_diff){
            min_diff = ans;
        }
    }
    return min_diff;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    
    for(int i = 0; i < size; i++) cin >> arr[i];
    int student;
    cin >> student;
    cout << chocoDistribution(arr, size, student);
    return 0;
}