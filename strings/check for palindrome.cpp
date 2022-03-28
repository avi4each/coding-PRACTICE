#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
/*
bool palindrome(string &str){		// naive method (reverse string and compare with original string 
	string rev=str;
	reverse(rev.begin(),rev.end());
	cout<<rev<<endl<<endl;
	return (rev==str);
	
}
*/
bool palindrome(string &str){			//efficient method: O(n/2)
	int begin=0;
	int end=str.length()-1;
	
	while(begin<end)
	{	if(str[begin]!=str[end])
			return 0;
		begin++;
		end--;	
	}
	return 1;
}

int main(){
	string str={"rubber"},str1={"geeksskeeg"};
	cout<<"print 0 if str not palindrome:    "<<palindrome(str)<<endl;
	
	cout<<"print 0 if STR1 not palindrome:    "<<palindrome(str1)<<endl;
	
	
	return 0 ;
}