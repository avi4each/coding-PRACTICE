#include<iostream>
#include<math.h>
using namespace std;
void printpowerset(string str)						//T.C.=2^N *N
{
	int n=str.length();
	int powsize=pow(2,n);
	for(int counter=0;counter<powsize;counter++)
	{for(int j=0;j<n;j++)
		if((counter&(1<<j))!=0)
		cout<<str[j];
		
	
	cout<<"\n";
	}
	
}




int main()
{
	string s={"abc"};
	printpowerset(s);
	
}