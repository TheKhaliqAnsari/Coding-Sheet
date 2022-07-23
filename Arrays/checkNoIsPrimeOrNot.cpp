#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1) return true;
    for(int i = n - 1; i > 1; i--){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    int num;
    cin >> num;
    
    if(isPrime(num)){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
    }
    return 0;
}