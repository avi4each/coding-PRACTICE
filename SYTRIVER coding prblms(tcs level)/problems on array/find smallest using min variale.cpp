#include<iostream>
#include<bits/stdc++.h>		//using min variable check for smallest
using namespace std ;
int main(){
	int arr[]={9,1,54,23,66,23,-1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i+1]<arr[i])
			min=arr[i+1];	
	}
	cout<<"smallest is : "<<min;	
	return 0;
}