#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,cntE=0,cntO=0,indexO,indexE;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;++i){
		cin>>nums[i];
		if(nums[i]%2==0){
			++cntE;
			indexE=i+1;
		}
		else{
			indexO=i+1;
			++cntO;
		}
	}
	if(cntE==1){
		cout<<indexE;
	}
	else{
		cout<<indexO;
	}

}
