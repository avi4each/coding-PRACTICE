#include<iostream>
#include<array>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()

{
	int basic[]={1,2,3};			//basic array implementation
	for(int i:basic)
	{
		cout<<i<<endl;
	}cout<<endl<<endl;
	
	array<int,7>a={2,3,4,5,6,7,9};  //array using stl;
	for(int i:a)
	{
		cout<<i<<endl;
	}
	
	return 0;
}