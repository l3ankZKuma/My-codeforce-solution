#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int nums[t],kept[t];
	for(int i=0;i<t;++i){
		cin>>nums[i];
		if((nums[i]&1)==0){
			kept[i]=(nums[i]/2)-1;
		}
		else{
			kept[i]=nums[i]/2;
		}
	}	
	for(int e:kept){
		cout<<e<<endl;
	}
}