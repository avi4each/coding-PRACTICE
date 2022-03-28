#include<bits/stdc++.h>		//largest elem. in array
using namespace std;		//using sort funcn
int main(){
	int a[]={34,5,76,8,2,99,8,3};
	
	int size=sizeof(a)/sizeof(a[0]);
	
	sort(a,a+size,greater<int>());
	
	cout<<"smallest element in array :"<<a[size]<<endl;
	cout<<"largest element in array:"<<a[0];
	return 0;
}