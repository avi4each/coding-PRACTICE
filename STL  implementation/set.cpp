#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int>s;
	s.insert(5);
	s.insert(6);
	s.insert(59);
	s.insert(9);
	s.insert(3);
	s.insert(89);
	s.insert(5);
for(auto i:s)					// always print the data in side set in increasing order  using BST
{cout<<i<<endl;					// in unordered_set we have data in unsorted way.
}
set<int>::iterator it=s.begin();	
it++;

s.erase(it);

for(auto i:s)
	cout<<i<<endl;
cout<<s.count(9)<<endl;			//count no of display of 9 in set
cout<<s.count(-7)<<endl;
set<int>::iterator itr=s.find(6);			//start iteretor from 6 to end

for(it=itr;it!=s.end();it++)
	cout<<*it<<"  ";

return 0;}
