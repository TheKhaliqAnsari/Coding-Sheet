#include<iostream>
using namespace std;


int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < col; i++){
        int ans = 0;
        for(int j = 0; j < row; j++){
             cout <<  arr[j][i] << " | ";
        }
        cout <<endl;
    }

}