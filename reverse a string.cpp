#include<iostream>  
#include<vector>  
#include<string>  
using namespace std;  
string func(string s){  
    vector<char> v;  
    string s2="";  
  
    for(int i=0;i<s.size();i++){  
        if(s[i]==' ' || i==s.size()-1){  
            if(i==s.size()-1) v.push_back(s[i]);  
            while(v.size()){  
                s2=s2+v[v.size()-1];  
                v.pop_back();  
            }  
            s2=s2+' ';  
        }  
        else  
            v.push_back(s[i]);  
    }  
    return s2;  
}  
  
int main(){  
  
    string s = "We will rock you !";  
    cout<<func(s)<<endl;  
  
    return 0;  
}  
