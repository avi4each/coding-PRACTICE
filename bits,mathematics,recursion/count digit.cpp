#include<iostream>
using namespace std;
int main()
{
	int x=98764444,res=0;
	while(x>0)
	{x=x/10;
	res++;
	}
	cout<<res;
}