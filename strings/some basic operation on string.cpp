#include<iostream>
using namespace std;
int main(){
	char a[]="avtar ji ";
	string s1="ki jai",s2="ho kuki shri_avtar";
		cout<<a;
	cout<<"sizeof(a)"<<sizeof(a)<<endl;		//includes auto added '\0' at end
	cout<<"s1.strlem"<<strlen(a)<<endl;			// doesnt include '\0' at end
	
	cout<<"s1.length"<<s1.length()<<endl;		//lenghth excludes '\0'
	s1=s1+s2;				//concats s1 with s2
	cout<<s1<<endl;
	cout<<s1.substr(0,5)<<endl;  //prints sub-str for positions of (start,end)
	cout<<s2.find("kuki s")<<endl;	  //prints the  first index of matched loaction 
	
	if(s1==s2)				// compares the size of s1 and s2
		cout<<"same";
	else if(s1<s2)			
		cout<<"smaller";
	else if(s2<s1)
		cout<<"larger";
	
	string str;
	cout<<"enter your name";
		cin>>str;  //takes only before " "...else use getline(cin,str);
	cout<<str<<endl;
	
	string str2={"geeks for geeks"};
	
	cout<<str2+"aar ahadaoh"<<endl;					//0th way to print str2
	
	for(int i=0;i<str2.length();i++)	////1st way to print whole s2 string.
		cout<<str2[i];
	cout<<endl;
	
	for(char x:str2)	//2nd way to print whole s2 string.
		cout<<x;
	cout<<endl;
	
	

	return 0;
}