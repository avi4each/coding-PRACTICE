#include<bits/stdc++.h>//find min and max of array using temp variable.
using namespace std;
int main(){
	 int a[]={4,3,76,88,4,34};
	 int n=sizeof(a)/sizeof(a[0]);
	 int max=a[0],min=a[0];
	 for(int i=0;i<n;i++){
	 	if(a[i]<min)
	 		min=a[i];
	 	if(a[i]>max)
	 		max=a[i];
	 }
	 
	 cout<<"max of array is:"<<max<<endl<<endl;
	 cout<<"min of array is:"<<min;
	return 0;
}