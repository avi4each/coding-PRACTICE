#include<iostream>
using namespace std;
int main()
{	
int n,i;

cout<<"enter he no you want multiplication table of	:"<<endl;
cin>>n;
cout<<endl;
	for(i=1;i<=10;i++)
	{	cout<<"\t\t";
		cout<<n<<"*"<<i<<"="<<n*i;
		cout<<endl;	
	}
	
	
	return 0;
}