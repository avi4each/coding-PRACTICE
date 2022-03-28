#include<bits/stdc++.h>
using namespace std;
int minswap(int a[],int n){
	vector<pair<int,int>>vec(n);
	for(int i=0;i<n;i++) vec[i]={a[i],i};
	sort(vec.begin(),vec.end());
	
	int swaps=0;
	for(int i=0;i<n;i++){
		if(vec[i].second==i)continue;
		else{
			++swaps;
			swap(vec[i],vec[vec[i].second]);
			--i;
		}
	}	
	return swaps;
}


int main(){
	int a[]={33,54,44,87,2,345};
	int n=6 ;
	int c=minswap(a,n);
	cout<<"minimum no of swaps is "<<c;
	return 0;
	
}