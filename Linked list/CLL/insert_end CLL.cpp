#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *next;
  node(int a)
  {	data=a; next=NULL;  }
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
node *insertend(node *head,int x)
{node *temp=new node(x);
	if(head== NULL)
		{temp->next=temp;
		return temp;
		}
	else
	{	node *curr=head;
		while(curr->next!=head)
			curr=curr->next;
		curr->next=temp;
		temp->next=head;
		return head;
	}
}

int main()
{	node *head=new node(10);
	head->next=new  node(20);
	head->next->next=new node(30);
	head->next->next->next=head;
	head=insertend(head,40);
	printlist(head);
	return 0;
}