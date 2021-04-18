#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	set<int> index;
	int lo=0,hi=3;
	while(lo+2<s.size()){
		if(s.substr(lo,3)=="WUB"){
			index.insert(lo);
			index.insert(lo+1);
			index.insert(lo+2);
		}
		++lo;
	}
	string res="";
	int i=0;
	while(i<s.size()){
		string temp="";
		while(i<s.size() && !index.count(i)){
			temp+=s[i];
			++i;
		}
		if(temp.size()>0){
			cout<<temp<<" ";
		}
		else{
			++i;
		}
	}
}