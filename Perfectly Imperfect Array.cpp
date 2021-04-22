#include<bits/stdc++.h>
using namespace std;
void slove(){
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	for(int i=0;i<n;++i){
		if(ceil(sqrt(nums[i]))!=sqrt(nums[i])){
			cout<<"YES"<<endl;
			return;
		}		
	}
	cout<<"NO"<<endl;
	return;

}
int main(){
	int T;
	cin>>T;
	while(T--){
		slove();
	}
}
