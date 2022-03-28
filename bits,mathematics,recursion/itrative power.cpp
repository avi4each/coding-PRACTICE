#include<iostream>
using namespace std;

int main()
 {
	int res=1,x=2,n=3;
	while(n>0)
	{
	 if(n%2!=0)
	 	res=res*x;
		x=x*x;
		n=n/2;
	}
  return res;
 }