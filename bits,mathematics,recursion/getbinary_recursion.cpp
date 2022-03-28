#include<iostream>
using namespace std;
void bincode(int n)
{	if(n==0)
	return;
	
	bincode(n/2);
	cout<<n%2;
}
int main()

{
	int a=18;
	
	
	bincode(a);
return 0;
}