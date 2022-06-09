#include<iostream>
#include "llnodeclass.h"
using namespace std;

node* deleteNodeRecursively(node *head, int pos){
    if(head == NULL) return head;

    else if(pos == 0){
        head = head -> next;

        return head;
    }
    head -> next = deleteNodeRecursively(head -> next, pos - 1);
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
    node *insertedNode = deleteNodeRecursively(head, 4);
    cout << endl;
    printLL(insertedNode);
    return 0;
}