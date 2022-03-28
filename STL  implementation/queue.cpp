#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<string>q;
	q.push("avtar ");
	q.push("chandra");
	q.push("ji ");
	q.push("ki jai ho ");
	cout<<"seize before pop"<<q.size()<<endl;
	cout<<"first element"<<q.front()<<endl;
	q.pop();
	cout<<"size after pop"<<q.size()<<endl;
	cout<<"capacaity"<<q.capacity<<endl;
	return 0;
}