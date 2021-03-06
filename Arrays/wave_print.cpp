#include<iostream>
using namespace std;

int main(){

    int row, col;
    cin >> row >> col;
    int arr[row][col];
    // take input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    // print matrix:
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }
    cout << endl;

    // Wave print:
    for(int i = 0; i < col; i++){
        if(i % 2 == 0){
            for(int j = 0; j < row; j++){
                cout << arr[j][i] << "|";
            }
        }
        else{
            for(int j = row - 1; j >= 0; j--){
                cout << arr[j][i] << "|";
            }
        }
    }

    return 0;
}
//3 4 1 2 3 4 5 6 7 8 9 10 11 12