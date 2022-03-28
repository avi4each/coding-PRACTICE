#include<iostream>
using namespace std;
int reverse_array(int a[],int n)
{	int first=0,last=n-1,temp=0;
	for(int i=0;i<n/2;i++)			//while(low<high){ ...... }			//0(n/2)
	{
		temp=a[first];
		a[first]=a[last];				//try :     swap(a[first],a[last]);
	
		a[last]=temp;
		last--;
		first++;
		
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9} ,n=9;
	
	cout<<"program to reverse and array ";
	
	reverse_array(a,n);
	
	return 0;
}