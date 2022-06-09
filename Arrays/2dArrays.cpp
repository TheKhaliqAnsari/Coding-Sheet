#include<iostream>
using namespace std;


int main(){ 
    int arr[100][100];
    int row, col;
    cin >> row >> col;
    //taking input :-
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // printing output row wise :-
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[j][i] << " | ";
        }
        cout << endl;
    }
    // printing output col wise :-
    // for(int i = 0; i < col; i++){
    //     for(int j = 0; j < row; j++){
    //         cout << arr[j][i] << " | ";
    //     }
    //     cout << endl;
    // }


    return 0;
}