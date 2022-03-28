#include<iostream>
using namespace std;
struct node
{
		int data;
	node *next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
node *insertend(node *head,int x)
{
	node *temp=new node(x);
		if(head==NULL)
			return temp;
	node *curr=head;
	while(curr->next!=NULL)
		curr=curr->next;
	
	curr->next=temp;
	return curr;		
}
int main()
{
	node *head=NULL;
	head=insertend(head,10);
	head=insertend(head,30);
	head=insertend(head,40);
	
while(head!=NULL)
	{	cout<<(head->data)<<"  ";
		head=(head->next);
	return 0;
	
	}
}