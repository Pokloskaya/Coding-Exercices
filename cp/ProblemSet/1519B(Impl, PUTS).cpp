//https://codeforces.com/problemset/problem/1519/B
#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
		puts(k==n*m-1?"YES":"NO");
	}
}