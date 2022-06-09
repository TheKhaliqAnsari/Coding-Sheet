#include<iostream>
using namespace std;

int factorial(int num){
    // 1. Base Case ->
    if(num == 1){
        return 1;
    }
    // small calculation ->
    
    // recursive call ->
    int smallAns = factorial(num - 1);
    return num * smallAns;
}

int main(){

    cout << "Enter Number :";
    int number;
    cin >> number;
    cout << "Factorial is : " << factorial(number);

    return 0;
}