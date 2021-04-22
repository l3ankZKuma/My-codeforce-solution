#include<bits/stdc++.h>
using namespace std;
void slove(){
	int k,x,y;
	cin>>k>>x>>y;
	if((y-x)/k==0){
		cout<<x<<endl;
		return;
	}
	else{
		cout<<k*((y-x)/k)+x<<endl;
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		slove();
	}
}
