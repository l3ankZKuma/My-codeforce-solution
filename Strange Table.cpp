#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void slove(){
	long long  n,m,x;
	cin>>n>>m>>x;
	--x;
	ll r=x%n;
	ll c=x/n;
	cout<<m*r+c+1<<endl;

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