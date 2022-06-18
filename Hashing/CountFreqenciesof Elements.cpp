#include<bits/stdc++.h>
using namespace std;
void countFreqEle(int a[],int n){
								//from DSA III notes (hashing topic)-- NAIVE APPROACH
	for(int i=0;i<n;i++){
		bool flag=0;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			continue;
		}
		int freq=1;
		for(int j=i+1;j<n-1;j++){
			
			if(a[i]==a[j]){
				freq++;	
			}
		}
		cout<<a[i]<<"  "<<freq<<endl;
	}	
}
int main(){
	int arr[11]={25,25,47,85,22,47,11,25,47,25,36};
	int n=11;
	cout<<"sizeee is :   "<<n<<endl;
	countFreqEle(arr,n);
	return 0;
}