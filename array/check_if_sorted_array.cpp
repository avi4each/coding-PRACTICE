#include<iostream>
using namespace std;
bool sorted(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	
		for(int j=i+1;j<n;j++)
			if(a[j]<a[i])
				return false;
				
	return true;
	
}


int main()
{
	int a[]={1,2,3,4,6,5},n=6;
	cout<<"program to check for a given array if it is sorted or not ";
	cout<<endl<<"		1	  if already sorted		 0		 if not sorted array is found ";
	cout<<endl<<endl<<endl<<endl<<sorted(a,n);
	
	
	return 0;
}