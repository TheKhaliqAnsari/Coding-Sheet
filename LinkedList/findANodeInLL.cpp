#include<iostream>
#include "llnodeclass.h"
using namespace std;

int findANodeInLL(node *head, int key){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        if(temp -> data == key){
            return count;
        }
        temp = temp -> next;
        count++;
    }
    return -1;
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
    cout << "Postion on Node is : " << findANodeInLL(head, 4);

}