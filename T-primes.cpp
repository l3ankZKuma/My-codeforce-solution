#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
bool check[(int)1e6+1]={0};
int main(){
	set<int> prime;
	for(int i=2;i*i<=(int)1e6;++i){
		if(!check[i]){
			prime.insert(i);
			for(int j=i*i;j<=(int)1e6;j+=i){
				if(!check[j]){
					check[j]=1;
				}
			}
		}
	}
	int n;
	cin>>n;
	ull nums[n];
	string res[n];
	for(int i=0;i<n;++i){
		cin>>nums[i];
		if(pow(sqrt(nums[i]),2)==nums[i] &&prime.count(sqrt(nums[i]))){
			res[i]="YES";
		}
		else{
			res[i]="NO";
		}
	}
	for(auto &s:res){
		cout<<s<<endl;
	}
}