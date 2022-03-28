#include<iostream>
using namespace std;
/*
int lcm(int a,int b)
{
	int res=max(a,b);
	while(true)
	{if(res%a==0&&res%b==0)
		return res;
		
		res++;
	
	
	}
return res;
}
						//naive solution
*/

/*																//more optimized solution
int gcd(int a,int b)									//using formula =gcd(a,b)*lcm(a*b)
{														//t.c.=0  (log(min(a,b)))
	if(b==0)
	return a;
	return gcd(b,a%b);	

}
int lcm(int a,int b)
{return (a*b)/gcd(a,b);
}

*/

int main()
{
	int a,b;
	cout<<"enter the two no. you want to get lcm of \n "<<"a:";
	cin>>a;
	cout<<"\nb:";
	cin>>b;
	cout<<"lcm a and b is:"<<lcm(a,b);
}