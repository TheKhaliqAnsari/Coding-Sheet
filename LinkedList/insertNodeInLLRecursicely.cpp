#include<iostream>
#include "llnodeclass.h"
using namespace std;

node *insertNodeRecursively(node *head, int pos, int data){
    if(head == NULL) return head;
    

    else if(pos == 0){
        node *newNode = new node(data);
        newNode -> next = head;
        head = newNode;

        return head;
        
    }
    head -> next = insertNodeRecursively(head -> next, pos - 1, data);
    return head;
}

node* takeInput(){
    int data;
    cin >> data;
    node* head = NULL;
    node* tail = NULL;
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
        cout << temp -> data << " -> ";
        temp = temp -> next; 
    }
}
int main(){

    node *head = takeInput();
    printLL(head);
    node *insertedNode = insertNodeRecursively(head, 5, 12);
    cout << endl;
    printLL(insertedNode);
    return 0;
}