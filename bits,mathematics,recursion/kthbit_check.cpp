#include<iostream>
using namespace std;
/*
int kthbit(int n,int k)					//by left shift 
{

if(n&(1<<(k-1)))
cout<<"yes";
else
cout<<"no";

return 0;	
}
*/

int kthbit(int n,int k)					//using right shift operator
{
	if(n>>(k-1) &1==1)
	cout<<"yes";
	
	else
	 cout<<"no";
	 
	 return 0;
	
}


int  main()

{int n,k;
cout<<"enter the no you want to check if kth bit is set or not:";
cin>>n;
cout<<"position you want to check :";
cin>>k;

kthbit(n,k);
	
	
	return 0;
}