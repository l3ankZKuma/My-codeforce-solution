#include<bits/stdc++.h>
using namespace std;
void slove(){
	int n;
	cin>>n;
	vector<pair<int,int>> pos;//x,y coordinate
	char c[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>c[i][j];
			if(c[i][j]=='*'){
				pos.push_back({i,j});
			}
		}
	}
	if(pos[0].first==pos[1].first){
		if(pos[0].first==n-1 && pos[1].first==n-1){
			c[pos[0].first-1][pos[0].second]='*';
			c[pos[0].first-1][pos[1].second]='*';
		}
		else{
			c[pos[0].first+1][pos[0].second]='*';
			c[pos[0].first+1][pos[1].second]='*';
		}
	}
	else{
		if(pos[0].second==pos[1].second){
			if(pos[0].second==n-1 && pos[1].second==n-1){
				c[pos[0].first][pos[0].second-1]='*';
				c[pos[1].first][pos[1].second-1]='*';
			}
			else{
				c[pos[0].first][pos[0].second+1]='*';
				c[pos[1].first][pos[1].second+1]='*';
			}
		}
		else{
			c[pos[0].first][pos[1].second]='*';
			c[pos[1].first][pos[0].second]='*';
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<c[i][j];
		}
		cout<<endl;
	}


}
int main(){
	int T;
	cin>>T;
	while(T--){
		slove();
	}
}