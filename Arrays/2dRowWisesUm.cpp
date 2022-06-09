#include<iostream>
using namespace std;



int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    // Taking input ->
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    //Row wise sum ->
    for(int i = 0; i < row; i++){
        int cSum = 0;
        for(int j = 0; j < col; j++){
            cSum = cSum + arr[i][j];
        }
        cout << "Row Sum is :: " << cSum << endl;
    }

    return 0;
}