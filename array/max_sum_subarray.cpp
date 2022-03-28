#include<iostream>
using namespace std;
int subarraysum(int a[],int n)
{
	int res=a[0];
	int maxsum=a[0];
	for(int i=0;i<n;i++ )
		{
			maxsum=max(maxsum+a[i],a[i]);
			res=max(res,maxsum);  //for +ve nos available only
			
			}	
return res;	
}
int main()											//kaden's algorithm    or    subarray sum.
{
	int a[]={-3,8,-2,4,-5,6},n=6;
	
	cout<<subarraysum(a,n);
	
	
	
	return 0;
}