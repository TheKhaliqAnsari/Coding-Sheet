#include<iostream>
#include "llnodeclass.h"
using namespace std;

node* merge2SortedLL(node *head1, node *head2){
    node *head = NULL;
    if(head1 == NULL){
        return head2;
    }else if(head2 == NULL){
        return head1;
    }
    if(head1 -> data <= head2 -> data){
        head = head1;
        head1 -> next = merge2SortedLL(head1 -> next, head2);
    }else{
        head = head2;
        head2 -> next = merge2SortedLL(head1, head2 -> next);
    }
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
        cout << temp -> data << " => ";
        temp = temp -> next;
    }
}


int main(){
    cout << "Enter first LL : ";
    node *head1 = takeInput();
    cout << endl << "Enter Second LL :";
    node *head2 = takeInput();
    cout << "First LL :" ;
    printLL(head1);
    cout << endl <<"Second LL :";
    printLL(head2);
    cout << endl << "Sorted LL : ";
    node *newLL = merge2SortedLL(head1, head2);
    printLL(newLL);
    return 0;
}