#include<iostream>
using namespace std;
int maxevenodd(int a[],int n)						//to get max of possible even odd subarray 
{		int curr=0,res=0;
	for(int i=0;i<n;i++)
		{
		if(((a[i]%2==0)&&(a[i-1]%2!=0))||((a[i]%2!=0)&&(a[i-1]%2==0)))
				curr++;
		else break;	
		
		res=max(res,curr);	
		}
			return res;
	}
int main()
{
	int a[]={7,10,13,15},n=4;
	cout<<maxevenodd(a,n);
	return 0;
}