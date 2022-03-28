#include<iostream>
#include<stack>


using namespace std;

int main()
{
	stack<string>s;
		s.push("avtar");
		s.push("chandra");
		s.push("pandey");
		s.push("ji");
	cout<<"top element into stack:--->"<<s.top()<<endl;		//print top element
		s.pop();
	cout<<"top element after 1 pop()"<<s.top()<<endl;		
	cout<<"size of stack"<<s.size()<<endl;			//to check size of stack
	cout<<"empty or not"<<s.empty()<<endl;			// to check if empty
	
	return 0;
}