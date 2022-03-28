#include<iostream>
using namespace std;
/*int getlargest(int a[],int n)
{
	int largest=0;
	for(int i=1;i<n;i++)				//0(n)
	{if(a[i]>a[largest])
	  {largest=i;
	   }
		
	}
	return largest;
}

int secondlargest(int a[],int n)
{
		int largest=getlargest(a,n);
		int res=-1;
		
		for(int i=0;i<n;i++)		//	0(n)
		{
			if(a[i]!=a[largest])
			{if(res==-1)
			 res=i;
			 else if(a[i]>a[res])
			 res=i;
			}
		}
	return res;
}*/

int secondlargest(int a[],int n)
{	int	largest=0,second=0;
	for(int i=0;i<n;i++)				//0(n)
	{	
		if(a[i]>a[largest])
		{
		second=largest;   
		largest=i;
		}
	}return second;
}

int main()
{
	int a[]={8,7,6,8,9,9,14,9},n=8;
	int pos=secondlargest(a,n);
	cout<<a[pos];
return 0;	
}