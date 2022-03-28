#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node(int x)
	{
		data=x;
		next=NULL;
	}

};
node *insert(node *head,int x)
{
	node  *temp=new node(x);
	temp->next=head;
	return temp;
}

int  main()
{											//inserts LL in reverse order of sequence
	node *head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	while (head!=NULL)												//to print the nodes 
	{cout<<(head->data)<<"  ";
	head=head->next;
	}
	return 0;
}