#include<bits/stdc++.h>
using namespace std;
set<char> vowels={'a','e','i','o','u','y'};
int main(){
	string s;
	cin>>s;
	string temp="";
	for(int i=0;i<s.size();++i){
		s[i]=tolower(s[i]);
		if(!vowels.count(s[i])){
			temp+='.';
			temp+=s[i];
		}
	}
	cout<<temp;
}