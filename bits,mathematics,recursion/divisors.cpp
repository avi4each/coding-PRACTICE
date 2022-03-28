#include<iostream>
using namespace std;


int main()
{int n;
cout<<"enter the no you want divisors of";
cin>>n;

for(int i=0;i*i<=n;i++)
{if(n%i==0)
	{cout<<i;
	if(i!=n/i)
	cout<<n/i;
	}
}


return 0;}