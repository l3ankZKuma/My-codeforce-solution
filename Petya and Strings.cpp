#include<bits/stdc++.h>
using namespace std;
int main(){
	string mixT1,mixT2;
	int valueT1=0,valueT2=0;
	cin>>mixT1;
	cin>>mixT2;
	int size=mixT1.size();
	for(int i=0;i<size;++i){
		if(tolower(mixT1[i])-'a'>tolower(mixT2[i])-'a'){
			cout<<1;
			return 0;
		}
		if(tolower(mixT1[i])-'a'<tolower(mixT2[i])-'a'){
			cout<<-1;
			return 0;
		}
	}
	cout<<0;
}