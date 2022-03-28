#include<iostream>
#include<deque>
using namespace std;

int main(){

	deque<int>d;
	d.push_back(14);			//push data into deque
	d.push_back(98);
	d.push_back(76);
	d.push_back(88);
	
	for(int i:d)					//print all data into deque
		cout<<i<<endl;
	cout<<endl<<endl;
	d.pop_back();				//pop data from deque from back
	d.pop_front();					//pop from front of deque
	for(int i:d)				//print data after pop from back	
		cout<<i<<endl<<endl;
	
	cout<<"print first indexed element/t"<<d.at(0)<<endl;  
	cout<<"front element/t"<<d.front()<<endl;		//to remove front element
	cout<<"end element/t"<<d.back()<<endl;
	cout<<"empty or not"<<d.empty()<<endl;			//to check for deque empty or not
	cout<<"before erase/t"<<d.size()<<endl;		//size of deque
	d.erase(d.begin(),d.begin()+1);					//to remove element from-to position
	cout<<"after erase/t"<<d.size()<<endl;			//
	
	for(int i:d)
		cout<<i<<endl;

	return 0;
}