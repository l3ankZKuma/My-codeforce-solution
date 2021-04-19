#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>> vvi(n);
	vector<int> cnt;
	vector<int> vi(n);
	for(int i=0;i<n;++i){
		int tempCnt=0,temp=0;
		cin>>vi[i];
		while(vi[i]){
			while(vi[i]%10==0){
			++temp;
			vi[i]/=10;
			}	
			if(vi[i]%10!=0){
				vvi[i].push_back(ceil((vi[i]%10)*pow(10,temp)));
				++tempCnt;
				++temp;
				vi[i]/=10;
		}
	}
		cnt.push_back(tempCnt);
	}
	for(int i=0;i<n;++i){
		cout<<cnt[i]<<endl;
		for(int j=0;j<vvi[i].size();++j){
			cout<<vvi[i][j]<<" ";
		}
		cout<<endl;
	}

}