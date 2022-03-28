#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={54,6,78,78,44,55,2,98};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);   //sort array a[]	in asc order
	//sort(a,a+n,greater<int>()    for sort in desc order
	cout<<"second smallest element:"<<a[1];
	cout<<"second largest element in aray:"<<a[n-2];

	return 0;
}