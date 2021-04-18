#include<bits/stdc++.h>
using namespace std;
bool conc(int a,int b){
	string q=to_string(b);
	return (a*pow(10,q.size())+b)==(a*b+a+b);
}
int main(){
	int n;
	cin>>n;
	int nums[n][2],cnt[n]={0};
	for(int i=0;i<n;++i){
		cin>>nums[i][0]>>nums[i][1];
	}
	for(int i=0;i<n;++i){
		for(int j=nums[i][0];j<=nums[i][1];++i){
			for(int k=nums[i][0];j<=nums[i][1];++k){
				printf("(%d,%d)\n",j,k );
			}
		}
	}
}