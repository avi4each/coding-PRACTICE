#include<iostream>
using namespace std;
//#pragma pack(1)
struct node{
	
	
	int a;			//+8
	int b;			//+8
	float c;		//+8		
	char name;		//+8
	char space;		//+8
	int d;			//+8
	char arr;	//+8
	double  e;		//+8
	char ar;       //+8    //takes size of double as 8
};
int main(){
struct node a;
cout<<sizeof(a);
	
	
	
	return 0;
}