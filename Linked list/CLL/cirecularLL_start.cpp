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

int main()
{
	node *head=new node(10);
	head->next=new node(5);
	head->next->next=new node(67);
	head->next->next->next=new node(89);
	head->next->next->next->next=head;
	for(int i=0;i<10;i++)
	{cout<<head->data<<"  ";
	head=head->next;
	}
	return 0;
}