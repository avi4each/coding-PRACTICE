#include<iostream>
using namespace std;


/*int getlargest(int a[],int n)				naive approach    t.c.=0(n^2)
{
	for(int i=0;i<n;i++)
	{ bool flag=true;
		for(int j=0;j<n;j++)
		{if(a[j]>a[i])
			{
			flag=false;
			break;
			}
		}
	if(flag==true)	
	return i+1;
	}
	return -1;
	
	
}
*/

int getlargest(int a[],int n)     //efficeient approach   t.c.==0(n)
{
int res=0;

for(int i=0;i<n;i++)
	if(a[i]>a[res])
		res=i;


return a[res];			//return res    for position od greatest in array
}
int main()
{
	int a[]={9,8,7,6,9,5,13,4};
	int n=8;
	cout<<endl<<getlargest(a,n);
	
	return 0;	
}


