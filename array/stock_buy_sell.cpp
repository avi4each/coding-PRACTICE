#include<iostream>
using namespace std;
/*
int maxprofit(int a[],int start,int end)
{
	if(end<=start)
	return 0;
	int profit=0;
	for(int i=start;i<end;i++)
	{for(int j=i+1;j<end;j++)
		{if(a[j]>a[i])
			{ int cur_profit=a[j]-a[i]+maxprofit(a,start,i-1)+maxprofit(a,j+1,end);
			profit=max(profit,cur_profit);
			}
		}
	
	}
	return profit;
}

*/


int main()
{
			
	int a[]={100,180,260,310,40,535,695},start=0,end=7;
	cout<<maxprofit(a,start,end);
	return 0;
}