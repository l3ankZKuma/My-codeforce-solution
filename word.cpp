#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int cntU=0,cntL=0;
	for(char e:s){
		if(islower(e)){
			++cntL;
		}
		else{
			++cntU;
		}
	}
	string temp="";
	if(cntL>=cntU){
		for(char c:s){
			temp+=tolower(c);
		}
	}
	else{
		for(char c:s){
			temp+=toupper(c);
		}
	}
	cout<<temp<<endl;

}