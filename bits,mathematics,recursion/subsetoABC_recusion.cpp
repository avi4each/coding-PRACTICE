#include<iostream>
using namespace std;
void subset(string s,string curr="  ",int i=0)
{
	if(i==s.length)
	{cout<<curr;
	return;
	}
	subset(s,curr,i+1);
	subset(s,curr+s[i],i+1);
	
}

//program unable to solve 

int main()
{	int i=0;
	string str="ABC",curr=" ";
	subset(str,curr,i);
	return 0;
}
