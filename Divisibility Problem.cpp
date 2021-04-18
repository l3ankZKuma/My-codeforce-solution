#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int cnt[t],nums[t][2];
	for(int i=0;i<t;++i){
		cin>>nums[i][0]>>nums[i][1];
		cnt[i]=ceil((float)nums[i][0]/nums[i][1])*nums[i][1]-nums[i][0];
	}
	for(int e:cnt){
		cout<<e<<endl;
	}


}