#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt=0,hi=1,lo=0,n;
	cin>>n;
	string s;
	cin>>s;
	while(hi<s.size()){
		while(hi<s.size() && s[lo]==s[hi]){
			// printf("%c %c (%d,%d)\n",s[lo],s[hi],lo,hi);
			++cnt;
			++hi;
		}
		lo=hi;
		hi=lo+1;
	}
	cout<<cnt;



}