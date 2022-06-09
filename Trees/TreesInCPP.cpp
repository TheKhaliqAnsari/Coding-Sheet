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

int countNodes(TreeNode<int> *root){
    int ans = 1;
    for(int i = 0; i < root -> children.size(); i++) ans = ans + countNodes(root -> children[i]);
    return ans;
}
int sumOfNodes(TreeNode<int> *root){
    int ans = root -> data;
    for(int i = 0; i < root -> children.size(); i++) ans = ans + sumOfNodes(root ->children[i]);
    return ans;
}
TreeNode<int> *maxData(TreeNode<int> *root){
    TreeNode<int> *max = root;
    for(int i = 0; i < root -> children.size(); i++){
        TreeNode<int> *smallAns = maxData(root -> children[i]);
        if(smallAns -> data > max -> data){
            max ->data = smallAns -> data;
        }
    }
    return max;
}

TreeNode<int> *takeInput(){
    int data;
    cout << "Enter Root Data : " << endl;
    cin >> data;
    TreeNode<int> *root = new TreeNode<int>(data);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();        
        int numChild;
        cout << "Enter Number of Children for " << front -> data << endl;
        cin >> numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout << "Enter " << i << " th data for " << front -> data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int> *root){
    if(root == NULL) return;
    cout << root -> data << " : ";
    for(int i = 0; i < root -> children.size(); i++) cout << root ->children[i] ->data << ",";
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++) printTree(root -> children[i]);
}
int countLeafNodes(TreeNode<int> *root){
    int leafNodes = 0;
    if(root == NULL) return 0;
    if(root -> children.size() == 0) return 1;

    for(int i = 0; i < root -> children.size(); i++){
        
        leafNodes = leafNodes + countLeafNodes(root -> children[i]);
    }
    return leafNodes;
}

int main(){
    TreeNode<int> *root = takeInput();
    printTree(root);
    cout << endl;
    cout << "Sum of Nodes are :: " << sumOfNodes(root) << endl;
    cout << "Total Leaf Nodes are :: " << countLeafNodes(root) << endl;
    cout << "Nodes in tree are :: " << countNodes(root) << endl;
    cout << "Max node in Tree is :: " << maxData(root) -> data << endl;
    
    return 0;
}
