#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;
	list<int>n(l);				// copy data of list l into n
	list<int>m(5,100);			//intialize data of m with size 5 having default value 100;
	
	for(int i:m)				//print m to console
		cout<<i<<endl;
	cout<<endl;
	l.push_back(12);		//push 12 into  the list
	l.push_back(76);
	l.push_front(9);
	l.push_front(8);				//data in list is :  8 9 12 76
	
	for(int i :l)			// print before pop_back and pop_front
		cout<<i<<endl;
	cout<<endl;
	l.pop_back();
	l.pop_front();
	
	for(int i :l)			// print after pop_back and pop_front
		cout<<i<<endl;
	cout<<endl;
	
	 l.erase(l.begin());			//to erase data from begin 1 posi.
	 
	 cout<<"after 1 erase :"<<endl;
	 for(int i:l)
	 	cout<<i<<endl;
	cout<<endl;
	return 0;
}