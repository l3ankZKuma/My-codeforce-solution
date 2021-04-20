#include<bits/stdc++.h>
using namespace std;
void slove(){
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	sort(nums,nums+n);
	int i=0,j=1;
	while(j<n){
		if(abs(nums[i]-nums[j])>1){
			cout<<"NO"<<endl;
			return;
		}
		++i;
		++j;
	}
	cout<<"YES"<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		slove();
	}
}
