#include<iostream>
using namespace std;


int main()
{
	int i,n,flag=0;
	cout<<"enter the no you want to cheeck as prime or not prime:"<<endl;
	cin>>n;
	
	for(int i=2;i<n;i++)			//0(n/2)
		{
			if(n%i==0)
			{flag++;
				
			}
	
		}
		if(flag!=0)
		cout<<"no. is not prime no ";
		else 
		cout<<"no is prime no " ;
	return 0;
}

