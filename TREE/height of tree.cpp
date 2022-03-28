#include<iostream>
#include<vector>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
		node (int k){
			data=k;
			left=NULL;
			right=NULL;
		}
};
int heightree(node *root){
	if(root==NULL)
		return 0;
	else
		return(max(heightree(root->left),heightree(root->right))+1);
}
int main(){
	node *root=new node(67);
	root->left=new node(87);
	root->right=new node(23);
	root->left->left=new node(55);
	root->left->right=new node(66);
	root->left->left->right=new node(44);
	cout<<heightree(root);
	return 0;
}