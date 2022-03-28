#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()

{
	vector<int>v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(8);
	v.push_back(89);
	
	cout<<binary_search(v.begin(),v.end(),3)<<endl;
	cout<<"lower bound"<<lower_bound(v.begin(),v.end(),8)-v.begin();	//
	cout<<"upper bound"<<upper_bound(v.begin(),v.end(),8)-v.begin();
		int a=3;
		int b=5;
	cout<<"max"<<max(a,b);
	cout<<"min"<<min(a,b);
		swap(a,b);
	cout<<"a->"<<a<<"b->"<<b<<endl;
		string s="abcd";
	reverse(s.begin(),s.end());
	cout<<"strings->"<<s<<endl;
		rotate(v.begin(),v.begin()+1,v.end());
	cout<<"after rotate"<<endl;
	for(int i:v)
		cout<<i<<"  ";	
	sort(v.begin(),v.end());				//insort algortitm=quick_sort+insertion_sort+merge_sort;
	
	for(int i:v)
		cout<<i<<endl;	
	
	return 0;
}