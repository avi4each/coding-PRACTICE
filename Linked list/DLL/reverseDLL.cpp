//doubly linked list //   + REVERSING A dll ;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node				//declare a node
{int data;					//data section inside a node
node *next;					//section that stores next pointer of node
node *prev;					//section that stores prev pointe of node 
node(int x)					//constructor declared
   {
	data=x;
	next=prev=NULL;				//default value for constructor pointers as null
	}
};
node *insertbegin(node *head, int data)		//insert at beginning of DLL
{
	node *temp=new node(data);					//TAKE THE NEW NODE AS TEMP name 
	temp->next=head;				//save values of pointer next
	if (head!=NULL)
	head->prev=temp;
	
	return temp;
}
node *insertend(node *head,int data)				//insert node at end of DLL
{
	node *temp=new node(data);
	if(head==NULL)
	return NULL;
	node *curr=head;				
	while(curr->next!=NULL)			//to call last node as curr where we have to insert node TEMP IN END
		curr=curr->next;
	curr->next=temp;
	temp->prev=curr;
	return head;
	
}
node *reverseddll(node *head)            //TO GET REVERSED dll TO SWAP NEXT TO PREV OF NODES
{																//unable to print reveresed DLL as have to sudy mo
	if(head==NULL||head->next==NULL)
	return head;
	
	node *prev=NULL;
	node *curr=head;
	while(curr!=NULL)					//C++ SWAPPING
	{
		prev=curr->prev;
		curr->prev=curr->next;
		curr->next=prev;
		curr=curr->prev;
	}
	return prev->prev;
}


int main()
{node *head=new node(10);			//	initial declaration as default
node *temp1=new node(20);
node *temp2=new node(30);

head->next=temp1;									//mark association of default declared nodes
temp1->prev=head;
temp1->next=temp2;
temp2->prev=temp1;
temp2->next=NULL;

head=insertbegin(head,50);					//insert nodes in beginnning ofDLL				
head=insertbegin(head,60);

head=insertend(head,900);						//insert node in end of DLL
head=insertend(head,1000);
while(head!=NULL)								////to print the output of DLL
{
		cout<<head->data<<"   ";
			head=head->next;	
}

	return 0;
}