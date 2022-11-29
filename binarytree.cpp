#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* buildtree( node* root){
    cout<<"enter the data in the node"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"enter the data for the left side of root"<< data <<endl;
    root -> left = buildtree(root -> left);
    cout<<"enter the data for the roght side of root "<<data<<endl;
    root -> right = buildtree(root -> right);
    return root;
}
levelOrederTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<" ";
            if(temp -> left){
            q.push(temp -> left);
            }
            if(temp -> right){
            q.push(temp -> right);
            }
        }
        
    }
    
}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root -> left );
    cout<< root -> data<<" ";
    inorder(root -> right);
}
void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}
void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<< root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}
int main(){
    node *root= NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildtree(root);
    levelOrederTraversal(root);
    cout<<"INORDER TRAVERSAL : ";
    inorder(root); 
    cout<<endl;
    cout<<"POSTORDER TRAVERSAL :";
    postorder(root);
    cout<<endl;
    cout<<"PREORDER TRAVERSAL :";
    preorder(root);
    return 0;
}