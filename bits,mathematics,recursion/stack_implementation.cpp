#include<iostream>
using namespace std;
#define max 5
int  top=0,arr[max];

int push()
{int item;
if(top==max-1)
	{cout<<"stack overflow		"<<endl;
	}
else{
cout<<"enter the element to push into stack		";
cin>>item;
top=top+1;
arr[top]=item;	
cout<<endl;
}return 0;
}

int pop()
{if(top==0)
	{cout<<endl<<"stack underflow"<<endl;
	}
else{
top=top-1;
}return arr[top+1];
}
int main()
{	cout<<"to push and pop in a stack";
	push();push();push();push();push();push();	
	cout<<"popped item is:	"<<pop()<<endl<<pop()<<endl<<pop()<<endl<<pop()<<endl<<pop()<<endl<<pop();
	return 0;
}
