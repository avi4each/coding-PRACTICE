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
*/
/*bool isprime(int n)
{if(n==1)
return false;
for(int i=2;i*i<=n;i++)
if(n%i==0)
return false;

return true;
}*/
bool isprime(int n)
{
	if(n==1)
	 return false;
	if((n==2)||(n==3))
	return true;
	if((n%2==0)||(n%3==0))
	return false;
	for(int i=5;i*i<=n;i+6)
		if((n%i==0)||(n%(i+2))==0)
	return false;
	
	return true;	
}


int main()
{int n;
cout<<"enter the no you want to check for being prime no.   n= ";
cin>>n;
cout<<"prime is 1 and non-prime is 0\n\n\n\n\n"<<isprime(n);
}