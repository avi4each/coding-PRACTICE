#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x=3,n=4;
	if(n==0) 
		return 1;
	int temp=pow(x,n/2);
		temp=temp*temp;
	if(n%2==0)
		cout<<temp;
	
	else 
		cout<<temp*x;
	
}