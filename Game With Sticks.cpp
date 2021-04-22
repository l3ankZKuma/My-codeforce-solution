#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int sum=m+n,temp=1;
	while(m!=0 && n!=0){
		--m;
		--n;
		switch(temp){
			case 1:
				temp=2;
				if(m==0 || n==0){
					cout<<"Akshat";
				}
				break;
			case 2:
				temp=1;
				if(m==0 || n==0){
				cout<<"Malvika";
				}
			}
		}
}