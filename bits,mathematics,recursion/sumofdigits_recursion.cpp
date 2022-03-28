#include<iostream>
using namespace std;
/*
int getsum(int n)
{
int res=0;
while(n>0)
{res=res+(n%10);
n=n/10;
}


return res;
}
*/




int getsum(int n )
{
	if(n<=9)
	return n;
	
	return getsum(n/10)+n%10;
}



int main()
{
int a=23456;
cout<<getsum(a);	
	
	
	
	return 0;
}