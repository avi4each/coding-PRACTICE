#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{	int data;
node *next;
node(int x)
	{
		data=x;
		next=NULL;
		
	}	
};
/*					delete NODE from front of LL
node *delhead(node *head)			//delete from start
{
	
	if(head==NULL)
	return NULL;
	else
	{
	
	node *temp=head->next;
	delete head;
	retun temp;}	
}
*/

/*    		delete NODE from end of LL
int *delend(node *head)
{
	if(head==NULL)
	return NULL;
	if(head->next==NULL)
	{
	delete head
	return  NULL;
	}
	node *curr=head;
	while(curr->next->next!=NULL)
		curr=curr->next;
	delete(curr->next;)			//free memory of lnked list
	curr->next=NULL;
	return head;
}
*/




int main()
{
	node *head;
	
	
	
	
	return 0;
}