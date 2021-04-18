#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=0;i<n;++i){
		if(i%2!=0){//row even
			++cnt;
			if(cnt%2==0){//row in row even
				cout<<"#";
				for(int i=1;i<m;++i){
					cout<<".";
				}
			}
			else{//row in row odd
				for(int i=0;i<m-1;++i){
					cout<<".";
				}
				cout<<"#";
			}

		}
		else{//row odd
			for(int i=0;i<m;++i){
				cout<<"#";
			}
		}
		cout<<endl;
	}

}
/*
9,9
#########
........#
#########
#........
#########
........#
#########
#........
#########
*/