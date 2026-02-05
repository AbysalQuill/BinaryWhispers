#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll quickPow(ll a, ll b, ll mod){
	ll res=1;
	while(b){
		if(b&1) res=res*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return res;
}
int main(){
	int a,b,p;
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<quickPow(a,b,p)<<endl; 
}