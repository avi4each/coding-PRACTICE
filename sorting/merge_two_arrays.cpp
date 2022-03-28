#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int m,int n)
{
	int c[m+n];
	for(int i=0;i<m;i++)
		c[i]=a[i];
	for(int i=0;i<n;i++)
		c[n+i]=b[i];
	sort(c,c+m+n);
	
	for(int i=0;i<m+n;i++)
		cout<<c[i]<<"  ";
}

int main()
{
	int a[]={10,23,45,67,89},b[]={10,23,56,78,98},c[20],m=5,n=5;
	merge(a,b,m,n);	
	return 0;
}