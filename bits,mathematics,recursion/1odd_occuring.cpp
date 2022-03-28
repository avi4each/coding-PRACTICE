#include<iostream>
using namespace std;
int findodd(int arr[],int n)
{/*
int j;
	for(int i=0;i<n;i++)
	{
	int count=0;
	for(j=0;j<n;j++)
	{
	if(arr[i]==arr[j])
	count++;
	}

	if(count%2!=0)
	cout<<arr[i];

}
*/

int res=0;
for(int i=0;i<n;i++)
res=res^arr[i];
	
return res;
}


int main()
{
	int arr[]={2,3,4,5,2,3,4,2,2,3,3,3,3,4,4},n=15;
	cout<<findodd(arr,n);
	return 0;
}