#include<iostream>
using namespace std;
int subarrsum(int arr[],int sum,int n)
{
	int res=0,l=0, i=0;
	while(i<n && l<n)
	{
	res+=arr[l];
	if(res==sum)
		return res;
	else if(res<sum)
		l++;
	else
		i++;
		l=i;
		sum=0;
	}		
	
	return res;
}

int main()
{		int arr[]={25,10,5,20};
		cout<<subarrsum(arr,15,5);
	return 0;
}
