#include<iostream>
using namespace std;

/*
int hcf(int a,int b)
{  int gcd=min(a,b);
while(gcd>0)
{if((a%gcd==0)&&(b%gcd==0))
	break;
gcd--;
}
return gcd;
}					//naive method
*/
/*
int hcf(int a,int b)
{while(a!=b)
{if(a>b)
a=a-b;
else 
b=b-a;

}
return a;
}					//eucledian  method
*/

/*
int hcf(a,b)
{
if(b==a)
return a;
else
return hcf(b,a%b);

}



*/
int main()
{int a,b;
cout<<"enter the no.s you want gcd of:";
cin>>a>>b;
cout<<hcf(a,b);
}