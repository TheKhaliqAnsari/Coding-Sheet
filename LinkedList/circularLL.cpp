#include<iostream>
#include "llnodeclass.h"
using namespace std;

node* takeInput(){
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    tail -> next = head;
    return head;
}

void printCircularLL(node *head){
    node *temp = head;
    if(head != NULL){
        do{
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        while(temp != head);
        
    }
}

int main(){
    node *head = takeInput();

    printCircularLL(head);
    return 0;
}