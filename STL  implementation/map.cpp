#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string>m;
	m[1]="avtar";
	m[2]="chandra";
	m[3]="ji";
	m[4]="ki";
	m[15]="jai";
	
	for(auto i:m)
		cout<<i.first<<endl;
	
	cout<<"find 15"<<m.count(15)<<endl;
	m.erase(15);
	cout<<"after erase"<<endl;
	for(auto i: m)
		cout<<i.first<<"  "<<i.second<<"   "<<endl;
	auto it=m.find(5);
	
	for(auto i=it;i!=m.end();i++)
		cout<<(*i).first<<endl;
	
	return 0;
}