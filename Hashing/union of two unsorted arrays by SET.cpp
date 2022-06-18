#include<bits/stdc++.h>
using namespace std;
int main(){   // printing the elements that are common in both the arrays a[] and b[];
	int a[]={12,54,87,32,45,98,45};
	int b[]={54,78,35,32,98,55,77};
	unordered_set<int>set;
	unordered_set<int>set1(b,b+7); //insert b[] in SET1
	for(int i=0;i<7;i++){	//insert a[] in SET
		set.insert(a[i]);
	}
	for(auto x: set){		//using two sets here for set->a[] and set1->b[]
		if(set1.count(x)==1){
			cout<<x<<"   ";
	
		}
	}
//	for(int i=0;i<set.size();i++){	-->//using only set->a and array b[];   this is more efficient
//		if(set.find(b[i])!=set.end()){
//			cout<<b[i]<<"   ";
//		}
//	}
	return 0;
}