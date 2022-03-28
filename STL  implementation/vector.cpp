#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(5);						//intialize vector v
	vector<int> a(v);
	cout<<"print vector a :"<<endl;			//copy vector v into a 
	for(int i:a)							//print wholevector a
		cout<<i<<endl;
	
	cout<<"print vector v:"<<endl;
	for(int i:v)							//print whole vector v
		cout<<i<<endl;
	
	cout<<"capacity of v ->"<<v.capacity()<<endl;
		v.push_back(10);				//push_front is not allowed as push from front is not applicable
									//insert from end of array
	cout<<"capacity of v->"<<v.capacity()<<endl;
		v.push_back(20);
	cout<<"capacity of v->"<<v.capacity()<<endl;
		v.push_back(30);										
	cout<<"capacity of v->"<<v.capacity()<<endl;  //capacity of v when limit exceeds it copies data from old vector to new vector of double size and deletes the last vector
	
	cout<<"size->"<<v.size()<<endl;//size of v
	cout<<"element"<<v.at(2)<<endl;				//element at position 2
	cout<<"front"<<v.front()	<<endl;					
	cout<<"back"<<v.back()<<endl;
	cout<<"befor pop"<<v.back()<<endl;			//end element of v
	v.pop_back();			//deletion of element from back
	cout<<"after pop"<<v.back()<<endl;				// after popend elememt of v
	cout<<"print all element of v"<<endl;
		for(int i:v)
			cout<<i<<endl;
	cout<<v.size()<<endl;			//size of v ;
	v.clear();
	cout<<v.size()<<endl;			// size=0  after v.clear
	cout<<v.capacity();				// capacity remains same after v.clear	
	
	
			return 0;
}