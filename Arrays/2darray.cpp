//Row wise sum
#include<iostream>
using namespace std;

int main(){

    int i, j;
    cin  >> i >> j;
    int arr[i][j];
    int ans;
    for(int row = 0; row < i; row++){
        for(int col = 0; col < j; col++){
            cin >> arr[row][col];
        }
    }
    // print matrix
    for(int row = 0; row < i; row++){
        for(int col = 0; col < j; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    //Row wise sum
    for(int row = 0; row < i; row++){
        ans = 0;
        for(int col = 0; col <j; col++){
            ans = ans + arr[row][col];
        }
        cout << ans << " ";
    }
    cout << endl;
    cout << endl;
    //Col wise sum :-
    for(int row = 0; row < j; row++){
        ans = 0;
        for(int col = 0; col < i; col++){
            ans += arr[col][row];
        }
        cout << ans << " ";
    }





    return 0;
}//3 4
// 1 2 3 4
// 5 6 7 8 
// 9 10 11 12
//3 4 1 2 3 4 5 6 7 8 9 10 11 12