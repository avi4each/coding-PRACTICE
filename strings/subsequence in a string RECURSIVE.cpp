#include<bits/stdc++.h>
using namespace std;
bool isSubseqRec(string &a,string &b,int n,int m){

if(m==0)	return true;
if(n==0)	return false;

if(a[n-1]==b[m-1])
	return isSubseqRec(a,b,n-1,m-1);	 		//TC: O(m+n)
												//A.S: O(m+n)
else
	return isSubseqRec(a,b,n-1,m); 

}

int main(){
	string a="avtar chandra";
	string b="ara";
	int n=a.length();
	int m=b.length();
	cout<<isSubseqRec(a,b,n,m);
	
	return 0;
}