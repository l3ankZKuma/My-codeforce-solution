#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	map<string,int> msi={
		{"Tetrahedron",4},
		{"Cube",6},
		{"Octahedron",8},
		{"Dodecahedron",12},
		{"Icosahedron",20}
	};
	ll n,sum=0;
	cin>>n;
	string s[n];
	for(int i=0;i<n;++i){
		cin>>s[i];
		sum+=msi[s[i]];
	}
	cout<<sum;
}