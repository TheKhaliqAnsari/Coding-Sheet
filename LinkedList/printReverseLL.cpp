#include<iostream>
#include "llnodeclass.h"
using namespace std;

void printReverseLL(node *head){
    if(head == NULL) return;
    
    printReverseLL(head -> next);
    cout << head -> data << " => ";
}
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



int main(){
    node *head = takeInput();
    printLL(head);
    cout << endl;
    printReverseLL(head);

}