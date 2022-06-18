#include<bits/stdc++.h>
using namespace std;
void countDistinctEle(int arr[],int n){
//		unordered_set<int>cnt;
//		for(int i=0;i<n;i++){
//			cnt.insert(arr[i]);
//		}
	unordered_set<int>cnt(arr,arr+n);
	cout<<cnt.size();
}
int main(){
	int arr[11]={12,52,45,14,12,65,87,98,5,33,45};
	countDistinctEle(arr,11);
	
	return 0;
}