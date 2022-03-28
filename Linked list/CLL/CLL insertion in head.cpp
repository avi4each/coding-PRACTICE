#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node(int a)
	{	data=a;
		next=NULL;
	}
	
};

void printlist(node *head)
{
	if(head==NULL)return;
	node *p=head;
	do{
		cout<<p->data<<"  ";
		p=p->next;
		
	}while(p!=head);
	
}
/*
node *insertbegin(node *head,int a)
{
node *temp=new node(a);
if(head==NULL) temp->next=temp;
else
{node *curr=head;
while(curr->next!=head)
	curr=curr->next;
curr->next=temp;
temp->next=head;

}
	return temp;
}
*/

node *insertbegin(node *head,int a)
{
	node *temp=new node(a);
	if(head==NULL) {
	temp->next=temp;
	return temp;}
	else
	{
	temp->next=head->next;
	head->next=temp;	//to insert temp inbtween head and head->next;
	int t=head->data;
	head->data=temp->data;
	temp->data=t;			//3lines to swap data of temp with data of head;		
	return head;
	}
}
int main()
	{
	node  *head=new node(45);
	head->next=new node(87);
	head->next->next=new node(32);
	head->next->next->next=head;
	int a;
	cout<<"enter element to enter to head of CLL";
	cin>>a;
	head=insertbegin(head,a);
	printlist(head);
	return 0;
	}