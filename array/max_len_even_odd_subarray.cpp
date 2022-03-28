#include<iostream>
using namespace std;
int max_len_even_odd(int a[],int n)
{
	int res=1;
	for(int i=0;i<n;i++)
		{int curr=1;
		for(int j=i+1;j<n;j++)
		{
			if(((a[i]%2==0)&&(a[i-1]!=0))||((a[i]%2!=0)&&(a[i-1]%2!=0)))
			
			curr++;
			
			else 
			break;
		}
		
		res=max(res,curr);
		}
	
	
	return res;
}



int main()
{
	int a[]={5,10,20,6,3,8}, n=6;
	cout<<max_len_even_odd(a,n);
	
	return 0;
}