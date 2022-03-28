#include<bits/stdc++.h>
using namespace std;
int luggage(int n){
	int a[n];
		
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int thres,res=0;
	cin>>thres;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=thres)
			res+=1;
		else if(a[i]>thres)
			res+=2;
	}
	return res;
}

int main(){
	int n;
	cin>> n;
	cout<<luggage(n);
	
	
	return 0;
}