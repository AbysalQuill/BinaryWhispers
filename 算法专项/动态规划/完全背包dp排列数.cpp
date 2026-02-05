#include<bits/stdc++.h>
#define rep(i,x,n) for(int i=x;i<=n;++i)
using namespace std;
int mod=1e9+7;
int main(){
	int n,w;
	cin>>n>>w;
	vector<int>a(n+1);
	rep(i,0,n-1) cin>>a[i];
	vector<int>dp(w+1);
	dp[0]=1;
	rep(i,1,w){
		rep(j,0,n-1){
			if(i>=a[j]) dp[i]=(dp[i]+dp[i-a[j]])%mod;
		}
	}
	cout<<dp[w];
	return 0;
}
