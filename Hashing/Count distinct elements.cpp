#include<bits/stdc++.h>
using namespace std;
void countDistinctEle(int ele[],int a){
		int res = 0;
		for(int i = 0;i < a;i++){
			bool flag = 0;
			for(int j = 0;j < i;j++){
				if(ele[i] == ele[j]){
					flag = 1;
					break;
				}
			}
		if(flag == 0){
			res++;
		}
	}
		cout<<res;
}

int main(){
	int a[10]={10,25,41,14,25,32,45,98,45,12};
		
	countDistinctEle(a,10);
	
	return 0;
}