#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cntA=0,cntD=0;
	for(char c:s){
		if(c=='A'){
			cntA++;
		}
		else{
			cntD++;
		}
	}
	if(cntA==cntD){
		cout<<"Friendship";
	}
	else if(cntA>cntD){
		cout<<"Anton";
	}
	else{
		cout<<"Danik";
	}
}
