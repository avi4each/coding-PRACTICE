#include<iostream>
using namespace std;
/*
int conseq1s(int a[],int n)						//0(n^2)
{
	int res=0;
	for(int i=0;i<n;i++)
		{int count=0;
			for(int j=i;j<n;j++)
			{
				if(a[j]==1)
				count++;
				else 
				break;
			}
		res=max(res,count);  
		}
	return res;
}*/

int conseq1s(int a[],int n)					//0(n)
{	int count=0,res=0;
	for(int i=0;i<n;i++)
	if(a[i]==0)
	count=0;
	else 
	{
		count++;
		res=max(res,count);
    }
return res;
}

int main()
{
	int a[]={0,1,1,1,0,1,0,0,0,1,0},n=6;
	cout<<conseq1s(a,n);
	return 0;
}