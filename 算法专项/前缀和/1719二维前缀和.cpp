#include<bits/stdc++.h>
#define rep(i,x,n) for(int i=x;i<=n;i++)
using namespace std;

vector<vector<int>>s(128,vector<int>(128));
int sum(int x1,int y1,int x2,int y2){
	return s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>>a(n+1,vector<int>(n+1));
	
	rep(i,1,n){
		rep(j,1,n){
		cin>>a[i][j];
		s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+a[i][j];	
		}
	}
	int ans=-2147483645;
	rep(i,1,n){
		rep(j,1,n){
			rep(k,i,n){
				rep(q,j,n){
					ans=max(ans,(sum(i,j,k,q)));
				}
			}
		}
	}
	cout<<ans;
	return 0;
}