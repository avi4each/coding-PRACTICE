
#include<bits/stdc++.h>
using namespace std;

struct node  
{ 
  int key; 
  struct node *left; 
  struct node *right; 
  node(int k){
      key=k;
      left=right=NULL;
  }
};


void printkdist(node *root,int k){
    if(root==NULL)return;
    
    if(k==0){cout<<root->key<<" ";}
    else{
    printkdist(root->left,k-1);
    printkdist(root->right,k-1);
    }
}  

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);
	root->left->right=new node(50);
	root->right->right=new node(70);
	root->right->right->right=new node(80);
	int k=2;
	
	printkdist(root,k);
}