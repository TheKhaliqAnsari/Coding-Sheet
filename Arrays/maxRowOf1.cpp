#include<iostream>
using namespace std;

int main(){

    int r, c;
    cin >> r >> c;
    int arr[100][100];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    int max1s = 0, row = 0;
    int row1s = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            
            if(arr[i][j] == 1){
                row1s = row1s + 1;
                row = i;
            }
        }
    }


    return 0;
}