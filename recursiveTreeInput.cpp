#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode*> children;

    TreeNode(T data){
        this -> data = data;
    }
};

TreeNode<int>* takeInputRecursively(){
    int RootData;
    cout << "Enter data : " << endl;
    cin >> RootData;
    TreeNode<int> *root = new TreeNode<int>(RootData);
    cout << "Enter number of children : "  << RootData << endl;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        TreeNode<int>*child = takeInputRecursively();
        root -> children.push_back(child);
    }
    return root;
}
void printTreeRecursively(TreeNode<int> *root){
    if(root == NULL) return;
    cout << root -> data <<" : ";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] ->data << ",";
    }
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++){
        printTreeRecursively(root -> children[i]);
    }
    cout << endl;
}

int main(){
    TreeNode<int> *root = takeInputRecursively();
    printTreeRecursively(root);
}