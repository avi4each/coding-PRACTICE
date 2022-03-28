#include<iostream>
using namespace std;
//iterative method
/*int fact(int n)
{
	int res=1,i;
	for(i=2;i<n/2;i++)
	
	{res=res*i;
		}	
		
		return res;
}		*/


//recursive method

/*int fact(int n)
{if (n==0)
	return 1;
return (n*fact(n-1));	
	
}
*/



int main()

{		int n;
	cout<<"enter the no";
	cin>>n;
	cout<<fact(n);
}