#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode *> childrean;

    TreeNode(T data){
        this -> data = data;
    }
};

TreeNode<int> *takeInputLevelWise(){
    int data;
    cout << "Enter root Data" << endl;
    cin >> data;
    TreeNode<int> *root = new TreeNode<int>(data);

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter childrean of " << front -> data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout << "Enter " << i << " th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front -> childrean.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int> *root){
    if(root == NULL) return;
    cout << root -> data << " : ";
    for(int i =  0; i < root -> childrean.size(); i++) {
        cout << root -> childrean[i] -> data<< ",";
    }
    cout << endl;
    for(int i = 0; i < root->childrean.size(); i++){
        printTree(root -> childrean[i]);
    }

}


int main(){
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
    return 0;
}