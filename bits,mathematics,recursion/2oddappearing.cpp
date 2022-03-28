#include<iostream>
using  namespace std;
int oddappearing(int arr[],int n)
{		

	int XOR=0,res1=0,res2=0;
	for(int i=0;i<n;i++)
		{XOR=XOR^arr[i];
		}
		int sn=XOR&~(XOR-1);
		
		for(int i=0;i<n;i++)
		{if((arr[i]&sn)!=0)
		
		res1=res1^arr[i];
		else
		res2=res2^arr[i];
		
		}

cout<<res1<<res2;

/*for(int i=0;i<n;i++)
	{	int count=0;
		for(int j=0;j<n;j++)
			if(arr[i]==arr[j])
			count++;
		if(count%2!=0)
			cout<<arr[i];
}
	*/
return 0;	
}





int main()

{
	int arr[]={2,3,4,5,6,7,2,3,4,5,7,7},n=12;
	oddappearing(arr,n);
	return 0;
}