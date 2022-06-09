#include<iostream>
#include"BinaryTreeClass.h"
using namespace std;

void printBT(BinaryTreeNode<int> *root){
    cout << root -> data << " : ";
    printBT(root -> left);
    printBT(root -> right);
}

int main(){
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *left = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *right = new BinaryTreeNode<int>(3);

    root -> left = left;
    root -> right = right;
    printBT(root);
    return 0;
}