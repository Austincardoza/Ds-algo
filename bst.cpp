#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
};
Node* createNode(int val){
    Node* newNode=new Node();
    newNode->val=val;
    newNode->left=newNode->right=NULL;
    return newNode;
}
Node* insert(Node* root,int val){
    if(!root) root= createNode(val);
    else if(val<=root->val) root->left=insert(root->left,val);
    else root->right= insert(root->right,val);
    return root; 

}
void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    if(root->val!=-1) cout<<root->val<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if(!root) return;
    if(root->val!=-1) cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    if(root->val!=-1) cout<<root->val<<" ";

}
Node* findLastRight(Node* root){
 if(!root->right) return root;
 findLastRight(root->right);
}
Node* helper(Node* root){
 if(!root->left) return root->right;
 if(!root->right) return root->left;
 Node* rightOfDeletedNode=root->right;
 Node* lastRight=findLastRight(root->left);
 lastRight->right=rightOfDeletedNode;
 return root->left;
}

Node* deleteNode(Node *root,int val){
  if(!root) return NULL;
  if(root->val==val) return helper(root);
  Node* temp=root;
  while(root){
      if(root->val>val)
      {
          if(root->left!=NULL&&root->left->val==val){
              root->left=helper(root->left);
              break;
          }
          else{
              root=root->left;
          }
      }
      else{
           if(root->right!=NULL&&root->right->val==val){
              root->right=helper(root->right);
              break;
          }
          else{
              root=root->right;
          }
      }
  }return temp;
}
void levelOrder(Node* root){
    if(!root) return;
    queue<Node*> que;
    que.push(root);
    while(root){
        for(int i=0;i<que.size();++i){
            Node* front=que.front();
            que.pop();
            if(front->val!=-1) cout<<front->val<<" ";
            if(front->left){
                que.push(front->left);
            }
            if(front->right){
                que.push(front->right);
            }
        }
    }
    return;
}

int main(){
    Node* root=NULL;
    int no=0;
    while(no!=-1){
        cout<<"enter a val (-1 to stop!!):";
        cin>>no;
        root=insert(root,no);
    }
    cout<<"inorder:";
    inorder(root);
    cout<<"preorder:";
    preorder(root);
    cout<<"postorder";
    postorder(root);
    cout<<"level order(BFS):";
    levelOrder(root);
    cout<<endl;
    int va;
    cout<<"enter a val to be deleted:";
    cin>>va;
    root= deleteNode(root,va);
     cout<<"inorder:";
    inorder(root);
    cout<<"preorder:";
    preorder(root);
    cout<<"postorder";
    postorder(root);
    cout<<"level order(BFS):";
    levelOrder(root);
    return 0;
}

