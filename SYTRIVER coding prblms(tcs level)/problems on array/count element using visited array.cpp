#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countele(int a[],int n){
	int count;
	vector<bool>visited(n,false);
	for(int i=0;i<n;i++){
		count=1;
		if(visited[i]==true)
			continue;	
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
			
				visited[j]=true;
				count++;			
			}
	}cout<<a[i]<<"  "<<count<<endl;
	}
	
}

int main(){
	int a[]={54,2,4545,2,2,545,6,6};
	int n=sizeof(a)/sizeof(a[0]);
	countele(a,n);
	
	
	return 0;
}