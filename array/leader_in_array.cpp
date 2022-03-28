#include<iostream>
using namespace std;


/*
void leaderinarray(int a[],int n)			//prints the nos that are greater, than any no in its right side.

{
	for(int i = 0; i < n; i++)
	{
		int flag = 0;

		for(int j = i + 1; j < n; j++)
		{
			if(a[i] <= a[j])
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			cout<<a[i]<<" ";
		}
	}
}
*/

void leaderinarray(int arr[], int n)
{
	int curr_ldr = arr[n - 1];

	cout<<curr_ldr<<" ";

	for(int i = n - 2; i >= 0; i--)
	{
		if(curr_ldr < arr[i])
		{
			curr_ldr = arr[i];

			cout<<curr_ldr<<" ";
		}
	}
}
	
		

int main()
{
	int a[]={9,8,7,6,1,10,8},n=7;
	leaderinarray(a,n);
	return 0;
}