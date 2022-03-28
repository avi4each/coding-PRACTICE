#include<iostream>					// print freq.  of every character
#include<bits/stdc++.h>
using namespace std;
int main(){

string str="avtarchandra ji ki jai hoo ";
int count[26]={0};

for(int i=0;i<str.length();i++)
	count[str[i]-'a']++;
for(int i=0;i<26;i++)
	if(count[i]>0)
		cout<<(char)(i+'a')<<"      "<<count[i]<<endl;		
cout<<str;
return 0;
}