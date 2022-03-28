#include<iostream>
using namespace std;


int main()
{
	int n;
	cout<<"enter the no to check if it is odd or even :      ";
	cin>>n;
	
	
	if(n%2==0)
		cout<<"the no "<<n<<"is even ";
	else 
		cout<<"the no "<<n<<"is odd";
	
	
	return 0;
}