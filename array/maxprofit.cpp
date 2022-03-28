#include<iostream>
using namespace std;
int maxprofit(int a[],int n)
{
	int profit;
	for(int i=1;i<n;i++)
	{if(a[i]>a[i-1])
		profit+=(a[i]-a[i-1]);
	}
	
	return profit;
}

int main()
{
	int a[]={100,180,260,310,40,535,695},n=7;
	cout<<maxprofit(a,n);
	
return 0;	
}