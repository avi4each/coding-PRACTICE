#include<iostream>
using namespace std;

int countset(int n)
{int res=0;

while(n>0)
	{
	n=n&(n-1);
	res++;
	/*
	if(n%2!=0)
	res++;
	
	n=n/2;

	*/
	
	}

return res;
}


int main()

{int n;
cout<<"enter the no you want to count SET bits of:";
cin>>n;

cout<<countset(n);
	
	
}