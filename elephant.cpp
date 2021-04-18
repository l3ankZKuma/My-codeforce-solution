#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int minSteps=1e6+1;
	for(int i=1;i<=5;++i){
		if(x%i==0){
			minSteps=min(minSteps,x/i);
		}
		else{
			int temp=ceil(x/i);
			minSteps=min(minSteps,temp+1);
		}
	}
	cout<<minSteps;
}