#include<bits/stdc++.h>
#define ll long long
using namespace std;
string newStr(string s,int k){
	string temp="";
	while(k--){
		temp+=s;
	}
	return temp;
}
void slove(){
	string s,t;
	cin>>s>>t;
	int gcd=__gcd(s.size(),t.size());
	if(newStr(s,t.size()/gcd)==newStr(t,s.size()/gcd)){
		cout<<newStr(s,t.size()/gcd)<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		slove();
	}
}