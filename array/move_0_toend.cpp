#include<iostream>
using namespace std;
int movetoend(int a[],int n)
{	
	for(int i=0;i<n;i++)
	if(a[i]==0)
	for(int j=i+1;j<n;j++)
	if(a[j]!=0)
	swap(a[i],a[j]);
	
	
	for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
}

int main()
{
	int a[]={0,0,0,0,0,0,10},n=7;
	movetoend(a,n);
	
	
	
	return 0;
}