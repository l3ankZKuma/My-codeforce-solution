#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	vector<int> upper,lower;
	for(int i=0;i<s.size();++i){//for check string
		if(islower(s[i])){
			lower.push_back(i);
		}
		else{
			upper.push_back(i);
		}
	}
	// printf("lower size = %d upper size = %d\n",lower.size(),upper.size());
	if(upper.size()==s.size()){
		string temp="";
		for(char c:s){
			temp+=tolower(c);
		}
		cout<<temp;
	}
	else if(lower.size()==1 && lower[0]==0){
		string temp="";
		for(int i=0;i<s.size();++i){
			if(i==0){temp+=toupper(s[i]);}
			else{
				temp+=tolower(s[i]);
			}
		}
		cout<<temp;
	}
	else{
		cout<<s;
	}
}