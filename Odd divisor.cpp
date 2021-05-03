#include<bits/stdc++.h>
#define ll long long
using namespace std;
void slove(){
	ll n;
	cin>>n;
	if(n&(n-1)==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
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