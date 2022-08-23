#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*>children;

    TreeNode(T data){
      this->data = data;
    }
};
void printTree(TreeNode<int>* root){
      if(root == NULL){
        return;
      }
      cout<<root->data<<":";
      for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<" ";
      }
      cout<<endl;
      for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
      }
    }

TreeNode<int>* takeInputRecursive(){
    int rootInput;
    cout<<"Enter node:";
    cin>>rootInput;
    TreeNode<int>* root = new TreeNode<int>(rootInput);
    cout<<"How many element in Node "<<root->data<<":";
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        root->children.push_back(takeInputRecursive());
    }

    return root;
}

int main(){

    TreeNode<int>* nodeRoot;
    nodeRoot = takeInputRecursive();
    printTree(nodeRoot);

return 0;
}

