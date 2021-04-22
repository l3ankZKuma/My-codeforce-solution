#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cntL=0,cntR=0;
	for(char c:s){
		if(c=='L'){
			++cntL;
		}
		else if(c=='R'){
			++cntR;
		}
	}
	cout<<cntR+cntL+1;
}