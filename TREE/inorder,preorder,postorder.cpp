#include<iostream>
#include<vector>
using namespace std;

struct node{
	int key;
	node *left;
	node *right;
	node(int k)
	{
		key=k;
		left=right=NULL;
	}
};
void inOrder(node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		cout<<(root->key)<<"  ";
		inOrder(root->right);	
	}
}
void preOrder(node *root)
{		
	if(root!=NULL)
	{
		cout<<(root->key)<<"  ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(node *root)
{
	if(root!=NULL)
	{	
		postOrder(root->left);
		postOrder(root->right);
		cout<<(root->key)<<"   ";
	}
}

int main()
{
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(4);
	inOrder(root);
	cout<<endl;
	preOrder(root);
	cout<<endl;
	postOrder(root);
	return 0;
}