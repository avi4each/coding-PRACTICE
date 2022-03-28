#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={43,65,87,12,5,890,8877};
	int n=sizeof(a)/sizeof(a[0]);
//	reverse(a,a+n);		//using STL reverse funcn
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<"   ";
//	}

								//using swap func and 0(n)
//	for(int i=0;i<n/2;i++){
//		swap(a[i],a[n-(i+1)]);
//		}
//		
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<"   ";
//	}

//	int low=0,high=n-1;		//using while loop and extra temp variable
//	while(low<high){
//		int temp=a[low];
//		a[low]=a[high];
//		a[high]=temp;
//		low++;
//		high--;
//	}
	
				//using recursive approach
void revarray(int a[],int start,int end){
	if(start<end){
		swap(a[start],a[end]);
		revarray(a[],start+1,end-1);
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<"   ";
}	
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<"   ";
	}
	return 0;
}