#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node(int x)
	{data=x;
	next=NULL;
	}
};
/*
node insertpos(node *head,int pos,int data)
{
	node *temp=new node(data);
	if(pos==1)
	{temp->next=head;
	return temp;
	}
	node *curr=head;
	for(int i=0;(i<pos-2) && (curr!=NULL);i++)
	   curr=curr->next;
	if(curr==NULL)
		return head;
	temp->next=curr->next;
	curr->next=temp;
	
	return head;
	
}
*/
int main()
{
	node *head=NULL;
	head=insertpos(head,2,10);
	head=insertpos(head,4,40);
	return 0;
}