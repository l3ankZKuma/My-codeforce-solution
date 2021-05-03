#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	string res="";
	for(int i=0;i<n;++i){
		if(i%2==0){
			if(i==n-1){
			res+="I hate it ";				
			}
			else{
			res+="I hate that ";				
			}
		}
		else{
			if(i==n-1){
			res+="I love it ";				
			}
			else{
			res+="I love that ";				
			}
		}
	}
	cout<<res;
}