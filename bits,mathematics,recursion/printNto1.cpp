#include<iostream>
using namespace std;
int print1toN(int n)
{
	if(n==0)
	return 0;
	
	cout<<n<<"  ";
	print1toN(n-1);

	
return 0;
}



int main()
{
int n=10;
print1toN(n);	


return 0;
}