#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int v[n][3];
	int sumX=0,sumY=0,sumZ=0;
	for(int i=0;i<n;++i){
		cin>>v[i][0]>>v[i][1]>>v[i][2];
		sumX+=v[i][0];
		sumY+=v[i][1];
		sumZ+=v[i][2];
	}
	if(sumX==0 && sumY==0 && sumZ==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}