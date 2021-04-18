#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=1;
	string s,mem="";
	cin>>n;
	vector<string> vs(n);
	for(int i=0;i<n;++i){
		cin>>vs[i];
		if(i==0){
			mem=vs[i];
			continue;
		}
		if(i>0 && vs[i]!=mem){
			++cnt;
			mem=vs[i];
		}
	}
	cout<<cnt;
}