#include<iostream>
using namespace std;

void spiralPrint(int arr[][100], int r, int c){
    int count = 0;
    int total = r * c;
    int startingRow = 0, endingRow = r - 1;
    int startingCol = 0, endingCol = c - 1;
    while(count < total){
        for(int i = startingCol; count < total && i <= endingCol; i++){
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;
        for(int i = startingRow; count < total && i <= endingRow; i++){
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;
        for(int i = endingCol; count < total && i >= startingCol; i--){
            cout << arr[endingRow][i]<< " ";
            count++;
        }
        endingRow--;
        //cout << " Starting Col val : " << startingCol << "Starting R : "  << startingRow << endl;
        for(int i = endingRow; count < total && i >= startingRow; i--){
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;

    }
}
// 3 4 1 2 3 4 5 6 7 8 9 10 11 12

int main(){

    int r, c;
    cin >> r >> c;
    int arr[100][100];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    spiralPrint(arr, r, c);

    return 0;
}