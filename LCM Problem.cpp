#include<bits/stdc++.h>
#define ll long long
using namespace std;
void slove(){
	ll l,r;
	cin>>l>>r;
	if(2*l>r){
		cout<<-1<<" "<<-1<<endl;
	}
	else{
		cout<<l<<" "<<l*2<<endl;
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