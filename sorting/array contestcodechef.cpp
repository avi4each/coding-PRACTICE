#include <iostream>
using namespace std;
int luckynum(int a[],int n)
{
    for(int i=0;i<n;i++)
    if(a[i]==7)
    cout<<"YES";
    else 
    cout<<"NO";
    
    return 0;
}

int main() {
    int n;
    int a[3];
    cin>>n;
    cout<<"enter "<<n<<"array";
    for(int i=0;i<n;i++)
    cin>>a[i];
    while(n)
    {
    luckynum(a,n);
	n--;
    }return 0;
}
