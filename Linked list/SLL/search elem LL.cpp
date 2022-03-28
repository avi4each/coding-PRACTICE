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
/*													searching iteratively
int searchll(int  *head,int x)
{
	int pos=1;
	node *curr=head;
	while(curr!=NULL)
	{if(curr->data==x)
		return pos;
	else
	{pos++;
	curr=curr->next;
	}
}
return -1;
}*/
/*
														search node in LL byrecursive program
int search(node *head,int x)
{
if(head==NULL) return -1;
if(head->data==x) return 1;
else
 {int res=search(head->next,x);
	if(res==-1) return -1;
	else 
	return (res+1);
 }
} 
*/

int main()
{
	node *head=NULL;
	
	
	return 0;
}