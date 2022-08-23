
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
public:
    int data;
    vector< TreeNode<T>* > children;

    TreeNode(int data){
    this->data = data;
    }
};

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

void levelOrderPrint(TreeNode<int>* root){
   if(root==NULL){
    return;
   }
   queue<TreeNode<int>*> q;
   q.push(root);
   while(!q.empty()){
        TreeNode<int>* f= q.front();
        q.pop();
        cout<<f->data<<" :";
    for(int i=0;i<f->children.size();i++){
        cout<<f->children[i]->data<<" ";
        q.push(f->children[i]);
    }
    cout<<endl;
   }
}
int countLeafNode(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int ans = 0;
    for(int i=0;i<root->children.size();i++){
        ans =ans + countLeafNode(root->children[i]);
    }
    return ans;
}

int main(){

    TreeNode<int>* root;
    root = takeInputLevelWise();
    cout<<endl;
    levelOrderPrint(root);
    cout<<"No of leaf Nodes:"<< countLeafNode(root)<< endl;


return 0;
}

/// 1 2 2 3 2 4 5 2 6 7 0 0 0 1 8 0

