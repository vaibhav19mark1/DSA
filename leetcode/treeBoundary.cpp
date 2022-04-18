#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct node{
    int val;
    node *left,*right;

    node(int v){
        left=right=NULL;
        val=v;
    }
};

bool isLeaf(node* root){
    return root->left==NULL && root->right==NULL;
}

void addLeafNodes(vector<int> &v,node* root){
    if(isLeaf(root)){
        v.push_back(root->val);
    }
    if(root->left){
        addLeafNodes(v,root->left);
    }
    if(root->right){
        addLeafNodes(v,root->right);
    }
}

vector<int> boundary(node* root){
    vector<int> v;
    if(root==NULL) return v;
    if(!isLeaf(root)) 
        v.push_back(root->val);
    node* temp=root->left;
    while(temp!=NULL){
        if(!isLeaf(temp)){
            v.push_back(temp->val);
        }
        if(temp->left!=NULL){
            temp=temp->left;
        }
        else temp=temp->right;
    }
    addLeafNodes(v,root);
    stack<int> st;
    temp=root->right;
    while(temp){
        if(!isLeaf(temp)){
            st.push(temp->val);
        }
        if(temp->right){
            temp=temp->right;
        }
        else temp=temp->left;
    }
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    return v;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->left->right->left=new node(7);
    root->left->right->right=new node(8);
    root->right->left->left=new node(9);
    root->right->left->right=new node(10);

    vector<int> ans=boundary(root);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//     ____1_____
//    /          /
//   2            3
//  / \          /
// 4   5        6
//    / \      / 
//   7   8    9  10