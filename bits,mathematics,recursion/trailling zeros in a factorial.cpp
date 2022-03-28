#include<iostream>
using namespace std;

int countzero(int n)
{ 	int fact=1;
	
	for(int i=2;i<=n;i++ )
	
	{fact=fact*i;
	}

	int res=0;

	while((fact%10)==0)	
	{res++;
	fact=fact/10;
	}
	
	return res;
}

int main()
{long n;
cout<<"enter the to calculate factorial of";
cin>>n;	
	cout<<"the no of zerros in the end is:"<<countzero(n);}