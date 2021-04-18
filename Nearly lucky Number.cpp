#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt=0;
	string s;
	cin>>s;
	char *p=&s[0];
	while(*p!='\0'){
		if(*p=='4' || *p=='7'){
			++cnt;
		}
		++p;
	}
	if(cnt==4 || cnt==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}