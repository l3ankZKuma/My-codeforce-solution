#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s1,s2,res="";
	cin>>s1;
	cin>>s2;
	int len=s1.size();
	for(int i=0;i<len;++i){
		res+=to_string(s1[i]^s2[i]);
	}
	cout<<res;
}