#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n)
{		
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
		swap(a[i],a[min]);
	}
}


int main()
{
	int a[]={23,43,43,43,65,45,78,123},n=8;
	selectionsort(a,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<"    ";
	return 0;
}