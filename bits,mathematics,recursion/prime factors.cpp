#include<iostream>
using namespace std;
/*
bool isprime(int n)
{
	if(n==1)
	return false;
	
	for(int i=2;i<n;i++)
	if(n%i==0)
	return false;
return true;
}
int primefactor(int n)
{
	for(int i=2;i<n;i++)
	{if(isprime(i))
	{int x=i;
	while(n%x==0) 
	{cout<<i;
	x=x*i;
	}
	}
	
}
return 0;
}
*/
/*
void primefactor(int n)
{
	if(n<=1)
	cout<<"1";
	for(int i=2;i*i<=n;i++)
	{while (n%i==0)
	{cout<<i;
	n=n/i;
	}
	 
	}
if(n>1)
cout<<n;
}


*/



int main()
{
	int n;
cout<<"enter the no you want prime factors of:";
cin>>n;
cout<<"prime factors are:";
primefactor(n);	
}