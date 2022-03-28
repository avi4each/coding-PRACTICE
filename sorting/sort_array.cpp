#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{	vector<int>v={10,5,20,7};								//range based FOR loop and  sorting with STL.
	int a[]={10,5,20,7},n=4;
	sort(a,a+n);
	for(int x:a)
	cout<<x<<"   ";
	
	sort(a,a+n,greater<int>());							//sort in decending order
	cout<<endl;
	for(int x:a)
	cout<<x<<"  ";
	
	cout<<endl;						
	sort(v.begin(),v.end(),greater<int>());							//sort using vector
	for(int i:v)
	cout<<i<<"  ";
	
	
	
	
	
	return 0;
	
}