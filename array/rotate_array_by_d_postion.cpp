#include<iostream>
using namespace std;
int leftrotate(int a[],int n)		//function to left rotate array by 1.
{
	a[n]=a[0];
	for(int i=1;i<=n;i++)			//to left roatate the array.
	{
		a[i-1]=a[i];
	}	
		
	
	return 0;
	
}

int leftrotate_d_postitions(int a[],int n,int d)
{
	for(int i=1;i<=d;i++)
	{	
		leftrotate(a,n);
	}
			
	for(int i=0;i<n;i++)			//to print array
	cout<<a[i];

	return 0;
}
	

int main()
{
	int a[]={1,2,3,4,5,6,7};

	int n=7,d;
	//cout<<"\narray left rotated by 1:			";
	//leftrotate(a,n);
	cout<<"\narray left rotated by 'd':		";
	cout<<endl<<"enter the value of d positions you want to rotate the array";
	cin>>d;
	leftrotate_d_postitions(a,n,d);
	return 0;
}
