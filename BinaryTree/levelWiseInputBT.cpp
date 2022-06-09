#include<iostream>
#include<queue>
#include"BinaryTreeClass.h"
using namespace std;

BinaryTreeNode<int> *takeInputLevelWise(){
    int rootData;
    cout << "Enter Root Data : " << endl;
    cin >> rootData;
    if(rootData == -1) return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter Left child of " << front ->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if(leftChildData != -1){
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front -> left = child;
            pendingNodes.push(child);
        }

        cout << "Enter Right child of " << front ->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if(rightChildData != -1){
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void printBT(BinaryTreeNode<int> *root){
    if(root == NULL) return;
    cout << root -> data << " : ";
    if(root -> left != NULL){
        cout <<"L" << root->left->data;
    }
    if(root->right != NULL){
        cout << "R" << root->right->data; 
    }
    cout << endl;
    printBT(root -> left);
    printBT(root -> right);
}

int main(){
    BinaryTreeNode<int> *root = takeInputLevelWise();
    printBT(root);
}