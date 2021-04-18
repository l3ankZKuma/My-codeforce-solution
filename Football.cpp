#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int cnt1=0,cnt0=0;
	for(int i=0;i<s.size();++i){
		if(s[i]=='1'){
			cnt0=0;
			++cnt1;
		}
		if(s[i]=='0'){
			cnt1=0;
			++cnt0;
		}
		if(cnt1>=7 || cnt0>=7){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}