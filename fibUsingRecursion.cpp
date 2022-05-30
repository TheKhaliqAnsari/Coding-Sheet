#include<iostream>
using namespace std;

int fib(int num){
    if(num == 0 || num == 1){
        return num;
    }
    int a = fib(num - 1);
    int b = fib(num - 2);
    return a+b;
}

int main(){
    int number;
    cout << "Enter num : ";
    cin >> number;
    cout << "Fib is : "<< fib(number);
    return 0;
}