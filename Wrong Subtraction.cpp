#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,K,times=0;
	cin>>N>>K;
	while(K--){
		if(N%10==0){
			N/=10;
			continue;
		}
		--N;
	}
	cout<<N;
}