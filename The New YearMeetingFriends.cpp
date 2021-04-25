#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> vi(3);
	for(int i=0;i<3;++i){
		cin>>vi[i];
	}
	sort(vi.begin(), vi.end());
	cout<<vi[1]-vi[0]+vi[2]-vi[1];
}