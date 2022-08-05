#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int p[n];
    p[0] = arr[0];
    for(int i = 1; i < n; i++){
        p[i] = arr[i] + p[i - 1];
    }
    for(int i = 0; i < n; i++)cout << p[i] << " ";
    cout << endl;
    int q;
    cin >> q;
    while(q--){
        int i, j;
        cin >> i >> j;
        cout << p[j] - p[i - 1] << endl;
    }

    return 0;
}