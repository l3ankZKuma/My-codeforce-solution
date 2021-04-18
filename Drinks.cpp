#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0,nums[n];
	int len=*(&nums+1)-nums;
	while(n--){
		cin>>nums[n];
		sum+=nums[n];
	}
	cout <<fixed<<setprecision(12) <<sum/(len*1.0) ;



}