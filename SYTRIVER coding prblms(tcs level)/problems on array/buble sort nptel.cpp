#include<iostream>
#include<bits/stdc++.h>
#define n 6
using namespace std;
int main(){
	vector<int>arr(n);
	arr={55,76,4,78,21,1};
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int temp;
			if(arr[j]<arr[i])
				{
//				temp=arr[j];
//				arr[j]=arr[i];
//				arr[i]=temp;
				swap(arr[i],arr[j]);
				}
		}	
	}
	for(int i=0;i<n;i++)
			cout<<arr[i]<<"   ";	
	return 0;
}