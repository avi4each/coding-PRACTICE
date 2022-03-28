#include<bits/stdc++.h>		//ITERATVE METHOD  to find subsequence 
using namespace std;

bool subseq(string &a,string &b){
	int n=a.length()-1;
	int m=b.length()-1;				// always use -1 as a.length() ends at +1 due to '\0'
	int j=0;
	for(int i=0;(i<n) && (j<m);i++)
		{
		if(a[i]==b[i])
			{j++;
			}
		}
	
return (j==m);

}

int main(){
	string a="abcd";
	string b="ad";
	cout<<subseq(a,b);
		
	return 0;
}