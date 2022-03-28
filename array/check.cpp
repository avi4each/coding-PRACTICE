#include<iostream>
using namespace std;
bool sorted(a[],n)
{
	for(int i=0;i<n-1;i++)
	
		for(int j=i+1;j<n;j++)
			if(a[j]<a[i])
				return false;
				
	return true;
	
}


int main()
{
	int a[]={1,2,3,4,5,6},n=8;
	
	cout<<sorted(a,n);
	
	
	return 0;
}