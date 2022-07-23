#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[] = {-2, -3, 4, 0, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    int msf = INT_MIN;
    int meh = 0;
    for(int i = 0; i < size; i++){
        meh = meh + arr[i];
        if(msf < meh) {
            msf = meh;
        }
        else if(meh < 0){
            meh = 0;
        }
    }
    cout << msf;


    return 0;
}