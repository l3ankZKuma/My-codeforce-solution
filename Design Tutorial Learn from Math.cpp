#include<bits/stdc++.h>
using namespace std;
bool check[(int)1e6+1]={0};
int main(){
	set<int> si={1};
	for(int i=2;i*i<=1e6;++i){
		if(check[i]==0){
			for(int j=i*i;j<=1e6;j+=i){
				if(check[j]==0){
					check[j]=1;
				}
			}
		}
	}
	for(int i=2;i<=1e6;i++){
		if(check[i]==0){
			si.insert(i);
		}
	}
	int n;
	cin>>n;
	if((n&1)==1){
		int L=(n/2),R=(n/2)+1;
		while(true){
			if(!si.count(L) && !si.count(R)){
				cout<<L<<" "<<R;
				return 0;
			}
			--L;
			++R;
		}
	}
	else{
		int L=(n/2),R=(n/2);
		while(true){
			if(!si.count(L) && !si.count(R)){
				cout<<L<<" "<<R;
				return 0;
			}
			--L;
			++R;
		}		

	}
}