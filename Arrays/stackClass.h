#include<bits/stdc++.h>
using namespace std;
class StackUsingArray{

    int *data;
    int capacity;
    int nextIndex;

    public:
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    bool isEmpty(){
        return nextIndex == 0;
    }
    int size(){
        if(nextIndex == 0) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return nextIndex;
    }
    void push(int element){
        if(nextIndex == capacity){
            cout << "Stack is full" << endl;
            return;
        }
            data[nextIndex] = element;
            return;
        
    }
    int pop(){
        if(isEmpty()){
            cout << "Stack is empty : " << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout << "Stack is empty : " << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }


};