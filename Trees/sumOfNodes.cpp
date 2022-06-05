#include<bits/stdc++.h>
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

TreeNode<int> *takeInputLevelWise(){
    int data;
    cout << "Enter root data : " << endl;
    cin >> data;
    TreeNode<int> *root = new TreeNode<int> (data);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter Number of child for : " << front -> data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout << "Enter " << i << " th data for " << front -> data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int> (childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int> *root){
    if(root == NULL) return;
    cout << root -> data << " : ";
    for(int i = 0; i < root->children.size(); i++) cout << root -> children[i] -> data << ",";
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++) printTree(root ->children[i]);
}
int countNodes(TreeNode<int> *root){
    int ans = 1;
    for(int i = 0; i < root -> children.size(); i++) ans = ans + countNodes(root -> children[i]);
    return ans;
}
int sumOfNodes(TreeNode<int> *root){
    if(root == NULL) return 0;
    int ans = root -> data;
    
    for(int i = 0; i < root ->children.size(); i++){
        ans = ans + sumOfNodes(root -> children[i]);
    }
    return ans;
}
TreeNode<int> *maxDataInNode(TreeNode<int> *root){
    TreeNode<int> *maxData = root;
    for(int i = 0; i < root -> children.size(); i++){
        TreeNode<int>  *smallAns = maxDataInNode(root -> children[i]);
        if(smallAns ->data > maxData -> data){
            maxData -> data = smallAns -> data;
        }
    }
    return maxData;
}

int main(){
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
    cout << endl << "Total Nodes are : " << countNodes(root);
    cout << endl;
    cout << "Sum of total nodes are : " <<sumOfNodes(root);
    cout << endl;
    cout << "Max data is : " << maxDataInNode(root) ->data;
    return 0;
}