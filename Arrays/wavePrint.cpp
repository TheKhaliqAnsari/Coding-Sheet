#include<iostream>
using namespace std;


int main(){
    int arr[10][10];
    int row, col;
    cin >> row >> col;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) cin >> arr[i][j];
    }
    //print noramal ->
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) cout << arr[i][j] << " | ";
        cout << endl;
    }

    cout << "Wave print : "<< endl;
    for(int j = 0; j < col; j++){
        if(j % 2 == 0){
            for(int i = 0; i < row; i++){
                cout << arr[i][j] << " | ";
            }
        }else{
            for(int i = row - 1; i > -1; i--){
                cout << arr[i][j] << " | ";
            }
        }
        cout << endl;
    }
    return 0;

}