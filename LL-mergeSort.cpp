#include<iostream>
#include "llnodeclass.h"
using namespace std;

node *reverseLL(node* head){
    if(head == NULL || head -> next == NULL) return head;

    node *smallans = reverseLL(head -> next);
    node *tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallans;

}

void printReversedLL(node *head){
    
    if(head == NULL) return;
    // cout << head -> data;
    printReversedLL(head -> next);
    cout << head -> data;
}

node* midOfLL(node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node *fast = head, *slow = head;
    
    while(fast -> next != NULL && fast -> next -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
node* merge2SortedLL(node* head1, node* head2){
    node *head = NULL;
    if(head1 == NULL){
        return head2;
    }
    else if(head2 == NULL){
        return head1;
    }
    
    if(head1 -> data <= head2 -> data){
        head = head1;
        head -> next = merge2SortedLL(head1 -> next, head2);
    }else{
        head = head2;
        head -> next = merge2SortedLL(head1, head2 -> next);
    }
    return head;

}

node *mergeSortOnLL(node *head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node *midInLL = midOfLL(head);
    node *secStart = midInLL -> next;
    midInLL -> next = NULL;
    node *head1 = mergeSortOnLL(head);
    node *head2 = mergeSortOnLL(secStart);
    node* complLL = merge2SortedLL(head1, head2);
    return complLL;
}



node* takeInput(){
    int data;
    cin >> data;
    node *head = NULL;
    node* temp = NULL;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
            temp = newNode;
        }else{
            temp -> next = newNode;
            temp = newNode;
        }
        cin >> data;
    }
    return head;
}

void printLL(node *head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " => ";
        temp = temp -> next;
    }
}

int main(){
    cout << "Enter LL : " << endl;
    node *head = takeInput();
    printLL(head);
    cout << endl;
    cout << "Print Reversed LL :: " << endl;
    node *newHead = reverseLL(head);
    printLL(newHead);
    // cout << endl;
    // cout << "Mid of LL is: " << midOfLL(head) -> data << endl;
    // node *sortedLL = mergeSortOnLL(head);
    // printLL(sortedLL);
    // cout << endl;
    // cout << "Reversed LL : ";
    // printReversedLL(head);
    return 0;
}