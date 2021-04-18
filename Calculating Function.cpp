#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll n;
	cin>>n;
	if((n&1)==0){
		cout<<n/2;
	}
	else{
		cout<<((n-1)/2)-n;
	}
}