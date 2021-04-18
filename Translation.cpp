#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int len=s1.size();
	string temp="";
	while(len--){
		temp+=s1[len];
	}
	if(temp==s2){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}