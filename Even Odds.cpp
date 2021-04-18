#include<bits/stdc++.h>
#define   ll  long long
using namespace std;
int main(){
	ll n,k;
	cin>>n>>k;
	if(((n+1)/2)<k){
			cout<<2*(k-((n+1)/2));
	}
	else{
			cout<<2*k-1;
	}
}