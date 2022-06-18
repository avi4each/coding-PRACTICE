#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={25,25,47,85,22,47,11,25,47,25,36};
	int n=11;
	map<int,int>freq;
	for(int i=0;i<n;i++){
		freq[a[i]]++;
	}
	
	for(auto x:freq){
		cout<<x.first<<"  ->  "<<x.second<<endl<<endl;
	}
	
	return 0;
}