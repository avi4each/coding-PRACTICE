#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int> maxi;
	priority_queue<int,vector<int>,greater<int>> mini;
	maxi.push(1);
	maxi.push(2);
	maxi.push(4);
	maxi.push(7);
	maxi.push(0);
	
	cout<<"size->"<<maxi.size()<<endl;
	cout<<"size->"<<mini.size()<<endl;
	int n=maxi.size();
	
	for(int i=0;i<n;i++)
		{cout<<maxi.top()<<"  ";
		maxi.pop();
		}cout<<endl;
	mini.push(5);
	mini.push(0);
	mini.push(6);
	mini.push(2);
	mini.push(0);
	mini.push(5);
	int m=mini.size();
	for ( int i=0;i<m;i++){
		cout<<mini.top()<<endl;
		mini.pop();
	}
	cout<<endl;
	cout<<"check if empty"<<mini.empty()<<endl;
	return 0;
}