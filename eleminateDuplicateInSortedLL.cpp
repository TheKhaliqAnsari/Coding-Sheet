#include<iostream>
#include"llnodeclass.h"
using namespace std;

node* eleminateElementsInSortedLL(node *head){
    node *temp = head;
    while(temp -> next != NULL){
        if(temp -> data == temp -> next -> data){
            temp -> next = temp -> next -> next;
        }
        else{
            temp = temp ->next;
        }
    }
    return head;
}

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
    return head;
}

void printLL(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data << "=>";
        temp = temp -> next;
    }
}

int main(){
    node *head = takeInput();
    printLL(head);
    node *eleminatedLL = eleminateElementsInSortedLL(head);
    cout << endl;
    
    printLL(eleminatedLL);
    return 0;
}