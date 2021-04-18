#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,w,n;
	cin>>k>>w>>n;
	int sum=0;
	for(int i=1;i<=n;++i){
		sum+=i*k;
	}
	if(sum>w){
		cout<<abs(sum-w);
	}	
	else{
		cout<<0;
	}
}