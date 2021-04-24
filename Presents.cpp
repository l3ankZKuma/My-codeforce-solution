#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> people(n);
	map<int,int> order;
	for(int i=0;i<n;++i){
		cin>>people[i];
		order[people[i]]=i+1;
	}
	for( auto &k:order){
		cout<<k.second<<" ";
	}
}