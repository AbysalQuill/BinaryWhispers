#include<bits/stdc++.h>
#define rep(i,x,n) for(int i=x;i<=n;++i)
using namespace std;
int lar=1e9;
int main(){
	int n,w;
	cin>>n>>w;
	vector<int>a(n);
	rep(i,0,n-1) cin>>a[i];
	vector<int>dp(w+1,lar);
	dp[0]=0;
	rep(i,1,w){
		rep(j,0,n-1){
			if(i>=a[j]) dp[i]=min(dp[i],dp[i-a[j]]+1);
		}
	}
	cout<<dp[w];
	return 0;
}
