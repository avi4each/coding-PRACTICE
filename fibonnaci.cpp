#include<iostream>
using namespace std;

int main()
{
	double a=0,b=1,c,n;
	cout<<"enter the position you want to have fibonnaci   ";
	cin>>n;

		for(int i=0;i<n-2;i++)						
			{
				c=a+b;
			
				a=b;
				b=c;
			}
		cout<<c;
	return 0;
}
