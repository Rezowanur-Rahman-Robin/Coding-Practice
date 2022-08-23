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


int main(){

    TreeNode<int>* node1= new TreeNode<int>(1);
    TreeNode<int>* node2= new TreeNode<int>(2);
    TreeNode<int>* node3= new TreeNode<int>(3);
    node1->children.push_back(node2);
    node1->children.push_back(node3);
    printTree(node1);

return 0;
}
