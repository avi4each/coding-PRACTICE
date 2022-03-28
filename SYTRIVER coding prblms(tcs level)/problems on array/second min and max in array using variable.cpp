#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={43,465,44,3434,2,98};
	int n=sizeof(a)/sizeof(a[0]);
	int min=a[0],max=a[0];
	int sec_max,sec_min;
	for(int i=0;i<n;i++){
		if(min>a[i]){
		
			sec_min=min;
			min=a[i];
			}
		if(max<a[i])
		  {
		  sec_max=max;
		  max=a[i];
		}
	}
	cout<<"second highest is : "<<sec_max;
	cout<<"seconf minimum is :"<<sec_min;
	
	return 0;
}