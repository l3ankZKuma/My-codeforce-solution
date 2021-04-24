#include<bits/stdc++.h>
using namespace std;
void slove(){
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	partition(nums.begin(),nums.end(),[&](const int e){
		return e%2;
	});
	for(int e:nums){
		cout<<e<<" ";
	}
	cout<<endl;
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