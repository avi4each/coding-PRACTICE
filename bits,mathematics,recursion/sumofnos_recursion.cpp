#include<iostream>
using namespace std;
int sumofnos(int n)
{
	if(n==0)
	return 0;
	return n+sumofnos(n-1);
}


int main()
{
	int n=4;
	cout<<sumofnos(n);
	return 0;
}