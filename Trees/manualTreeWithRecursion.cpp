#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode *> children;
    TreeNode(T data){
        this -> data = data;
    }
};
TreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter Data : " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int> (rootData);
    cout << "Enter number of child for : " << rootData <<endl;

    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        TreeNode<int> *child = takeInput();
        root -> children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int> *root){
    if(root == NULL) return;
    cout << root -> data << " : ";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] -> data << ",";
    }
    cout << endl;
    for(int i = 0; i < root ->children.size(); i++){
        printTree(root->children[i]);
    }
}

int main(){ 
    TreeNode<int> * root = takeInput();
    printTree(root);
    return 0;
}