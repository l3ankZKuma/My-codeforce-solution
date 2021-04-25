#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sumOfDigit(ll n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
void slove(){
	ll n;
	cin>>n;
	while(__gcd(n,sumOfDigit(n))<=1){
		++n;
	}
	cout<<n<<endl;
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