#include<iostream>
using namespace std;
bool ispow2(int n)
{




/*									optimized algo
if(n == 0)
        return true;
    
    return ((n & (n - 1)) == 0);
    */



/*	if(n==0)						//naive approach
	return false;
	while(n!=1)
	{
	if(n%2!=0)
	return false;
	n=n/2;
	}
	return true;
	
*/
}


int main()
{
int n;
cout<<"enter the no you want to check id it is power of 2 i.e.  2^n:";
cin>>n;
cout<<ispow2(n)?"true":"false";
}