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

TreeNode<int>* takeInputLevelWise(){
    int rootInput;
    cout<<"Enter root of a node:";
    cin>>rootInput;
    TreeNode<int>* root = new TreeNode<int>(rootInput);
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();
        cout<<"How many elements in node "<<f->data<<":";
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int childValue;
            cout<<"Enter "<<i+1<<" no node of root "<<f->data<<":";
            cin>>childValue;
            TreeNode<int>* childNode = new TreeNode<int>(childValue);
            q.push(childNode);
            f->children.push_back(childNode);
        }

    }
    return root;
}

int main(){

    TreeNode<int>* nodeRoot;
    nodeRoot = takeInputLevelWise();
    printTree(nodeRoot);

return 0;
}


