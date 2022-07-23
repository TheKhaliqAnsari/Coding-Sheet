
#include<iostream>
using namespace std;
//     1
//    21
//   321
//  4321

int main(){

    int n;
    cin >> n;
    int zero = n - 1;
    int i = 0, j = n;
    while(i < j){
        //print zero's
        while(zero > i){
            cout << "0" << " ";
        }
        cout << endl;
        
    }


    return 0;
}