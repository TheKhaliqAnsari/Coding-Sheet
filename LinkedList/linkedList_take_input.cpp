#include<iostream>
#include"llnodeclass.h"
using namespace std;

node* deleteIthNode(node *head, int pos){
    int count = 0;
    node *temp = head;
    if(pos == 0){
        temp = temp -> next;
        return temp;
    }
    while(temp != NULL && count < pos - 1){
        temp = temp -> next;
        count++;
    }
    temp -> next = temp -> next ->next;
    return temp;
}

node* insertNode(node *head, int pos, int data){
    node *newNode = new node(data);
    node *temp = head;
    int count = 0;
    // if pos is on index 0.
    if(pos == 0){
        newNode -> next = temp;
        head = newNode;
        return head;
    }
    //if pos is in the middle ->
    while(temp != NULL && count < pos - 1){
        temp = temp -> next;
        count++;
    }
    if(temp != NULL){
        node *tempHolder = temp -> next;
        temp -> next = newNode;
        newNode -> next = tempHolder;
    }
    return head;
}

void LLithnode(node *head, int i){
    node *temp = head;
    int count = 0;
    while(temp != NULL){
        if(count == i){
            cout << temp -> data;
        }
        temp = temp -> next;
        count++;
    }

}

int LLlength(node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head -> next;
    }
    return count;
}

node *takeInput(){
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
    // node *temp = head;
    while(head != NULL){
        cout <<head  -> data << " -> ";
        head = head -> next;
    }
}
int main(){
    node *head = takeInput();
    printLL(head);
    cout << endl;
    cout << "Length of LL is : " << LLlength(head);
    cout << endl;
    LLithnode(head, 3);
    node *newHead = insertNode(head, 2, 21);
    cout << endl;
    printLL(newHead);
    cout << endl << "Deleted Node LL : " << endl;
    node *delNode = deleteIthNode(head, 4);
    printLL(delNode);
}