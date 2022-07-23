#include<iostream>
using namespace std;

// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    int startingRow = 0, startingCol = 0, endingRow = row - 1, endingCol = col - 1;
    int count = 0;
    int total = row * col;
    while(count < total){
        //print starting row:
        for(int index = startingCol;count < total && index <= endingCol; index++){
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;
        //print ending col:
        for(int index = startingRow;count < total && index <= endingRow; index++){
            cout << arr[index][endingCol]<< " ";
            count++;
        }
        endingCol--;
        //print ending row:
        for(int index = endingCol;count < total && index >= startingCol; index--){
            cout << arr[endingRow][index]<< " ";
            count++;
        }
        endingRow--;

        //print startomg col:
        for(int index = endingRow;count < total && index >= startingRow; index--){
            cout << arr[index][startingCol]<< " ";
            count++;
        }
        startingCol++;

    }


    return 0;
}