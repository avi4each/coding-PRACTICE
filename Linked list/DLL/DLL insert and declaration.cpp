//doubly linked list    //insertion by simple logiv and decllaration of DLL ;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{int data;
node *next;
node *prev;
node(int x)
   {
	data=x;
	next=prev=NULL;
	}
};

int main()
{node *head=new node(10);
node *temp1=new node(20);
node *temp2=new node(30);
head->next=temp1;
temp1->prev=head;
temp1->next=temp2;
temp2->prev=temp1;
temp2->next=NULL;

while(head!=NULL)
{
		cout<<head->data<<"   ";
			head=head->next;	
}
	return 0;
}