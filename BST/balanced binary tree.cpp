#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};
void preOrder(node *root){
    if(!root)
    return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root){
    if(!root)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(node *root){
    if(!root)
    return;
    inOrder(root->left);
    cout<<(root->data)<<" ";
	inOrder(root->right);
   }

void insert(node *&root, int data){
    if(!root){
        root=new node(data);
        return;
    }
    if(data<=root->data)
    insert(root->left,data);
    else
    insert(root->right,data);
}

int main() {
    node *head=nullptr;
    insert(head,5);
    insert(head,3);
    insert(head,6);
    insert(head,8);
    insert(head,7);
    insert(head,9);
    insert(head,6);
    insert(head,2);
    preOrder(head);
    cout<<endl;
    postOrder(head);
	cout<<endl;
	inOrder(head);
	return 0;
}