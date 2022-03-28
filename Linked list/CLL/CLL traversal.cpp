#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
	
};
/*									using for loop
void printlist(node *head)
{
	if(head==NULL) return ;
	cout<<head->data<<"  ";
	for(node *p=head->next;p!=head;p=p->next)
	cout<<p->data<<"  ";
}*/

void printlist(node *head)			//using do-while loop
{
if(head==NULL)
	return;
	node *p=head;
do{cout<<(p->data)<<"  ";
	p=p->next;
	
}while(p!=head);

}


int main()
{node *head=new node(10);
	head->next=new node(5);
	head->next->next=new node(20);
	head->next->next->next=new node(15);
	head->next->next->next->next=head;
	printlist(head);
	return 0;
	
	
	return 0;
}