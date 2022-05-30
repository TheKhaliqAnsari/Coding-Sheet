#include<iostream>
#include "llnodeclass.h"
using namespace std;

node *takeInput(){
    int data;
    cin >> data;
    node* head = NULL;
    node* tail = NULL;
    while(data != -1){
        node* newNode = new node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void printLL(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
}

int lengthOfLLUsingRecursion(node *head){
    node *temp = head;
    if(temp == NULL){
        return 0;
    }
    return 1 + lengthOfLLUsingRecursion(temp -> next);
}

int main(){
    node *head = takeInput();
    printLL(head);
    cout << endl;
    cout << "Length Using Recursion : " << lengthOfLLUsingRecursion(head);

}