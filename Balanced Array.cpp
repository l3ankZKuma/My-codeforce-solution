#include<bits/stdc++.h>
using namespace std;
void slove(){
	int n;
	cin>>n;
	if(n%4==0){
		int mul=n/4;
		string temp="";
		for(int i=1;i<=n/2;++i){
			temp+=to_string(2*i);
			temp+=" ";
		}
		for(int i=1;i<n/2;++i){
			temp+=to_string(2*i-1);
			temp+=" ";
		}
		temp+=to_string((2*(n/2)-1)+2*mul);
		cout<<"YES"<<endl;
		cout<<temp<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		slove();
	}
}