#include<iostream>
using namespace std;
int maxdiffarr(int a[],int n)				//searching for max and min and getting there differnce
{	int max=a[0],min=a[0],maxdiff=0;		//here we don't consider the sequence of nos.
	for(int i=1;i<=n;i++)
	{	if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	
maxdiff=max-min;
	return maxdiff;
}



int main()
{
int a[]={2,3,10,6,4,8,1},n=7;

cout<<maxdiffarr(a,n);

return 0;}
