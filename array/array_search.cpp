#include<iostream>
using namespace std;
int search(int a[],int n, int x)
{ for(int i=0;i<n;i++)
	{ if(a[i]==x)
		return i+1;
		
		 
		}
	return -1;
}

int insert(int a[],int n,int x,int cap,int pos)			//insertion into array at given posittion.
{
if(n==cap)
return n;
int indx=pos-1;
for(int i=n-1;i>=indx;i--)
  {  
	a[i+1]=a[i];
	a[indx]=x;
	return (n+1);
	
  }
return -1;
}

int main()
{
	int a[5]={5,4,3,2,1};
	int n=5,x=3,cap=n,pos;
	cout<<search(a,n,x);		//returns index postiton of passed no.  by user
	cout<<endl<<"enter position you want to enter the no.";
	cin>>pos;
	cout<<insert(a,n,x, cap,pos);
	
	
	
	return 0;
}