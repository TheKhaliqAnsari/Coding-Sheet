#include<iostream>
#include<vector>
#include<queue>
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

TreeNode<int> *takeInput(){
    int data;
    cout << "Enter root data : " << endl;
    cin >> data;
    TreeNode<int> *root = new TreeNode<int>(data);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter Number of Children for : " << front -> data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout << "Enter " << i << " th data of " << front -> data << endl;
            cin >> childData;
            TreeNode<int> * child = new TreeNode<int> (childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printTree(TreeNode<int> *root){
    if(root == NULL) return;
    cout << root -> data << " : ";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] -> data << " , ";
    }
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++){
        printTree(root ->children[i]);
    }
}
int countTreeNode(TreeNode<int> *root){
    if(root == NULL) return 0;
    int ans = 1;
    for(int i = 0; i < root -> children.size(); i++)  ans = ans + countTreeNode(root -> children[i]);
    return ans;
}

int main(){
    TreeNode<int> *root = takeInput();
    printTree(root);
    cout << endl;
    cout << "Total Nodes in Tree are :: " << countTreeNode(root);
    return 0;
}