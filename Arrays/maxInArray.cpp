#include<iostream>
using namespace std;

int main(){

    int arr[10];
    for(int i = 0; i < 10; i++) cin >> arr[i];
    int max = INT8_MIN;
    for(int i = 0; i < 10; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << endl << "Max is : " << max;
    return 0;
}