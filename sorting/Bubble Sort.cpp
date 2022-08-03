#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>ve){
    int s=ve.size()-1;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(ve[j]>ve[j+1])
            swap(ve[j],ve[j+1]);
        }
    }
    
    cout<<"after bubble sort"<<"  ";
    for(auto a:ve)
    cout<<a<<"  ";
    
    
}


int main() {
    vector<int>v;
    
   for(int i=0;i<v.size();i++)
{   int a;
  cin>>a;
  v.push_back(a);
}
cout<<"array before BUBBLE SORT:";
    for(auto a:v)
    cout<<a<<"  ";

    bubble_sort(v);
    
	return 0;
}