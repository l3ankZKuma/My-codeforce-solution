#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int res=0,n;
	cin>>n;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		res=max(res,x);
	}
	cout<< (res==1 ? "HARD":"EASY");	
}