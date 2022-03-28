#include<iostream>
#include<set>
using namespace std;

struct node{
	int key;
	node *left,*right;
	node(int x)
	{
		key=x;
		left=right=NULL;
	}
};
node *insert(node  *root,int x){
	if(root==NULL)
		return new node(x);
	else if(root->key>x)
		root->right=insert(root->right,x);	
	else
		root->left=insert(root->right,x);
return root;
}

void inOrder(node *root){
    if(!root)
    return;
    inOrder(root->left);
    cout<<(root->key)<<" ";
	inOrder(root->right);
   }
int main(){
	node *root=NULL;
	insert(root,10);
	insert(root,30);
	insert(root,2);
	insert(root,7);
	insert(root,55);
	insert(root,11);
	inOrder(root);
	return 0;
}