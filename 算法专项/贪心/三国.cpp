#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<n;++i)
using namespace std;
typedef long long ll;
ll maxeven(vector<ll>& contri) {
    sort(contri.begin(),contri.end(),greater<ll>());
    ll sum=0,cnt=0;
    for(auto i:contri){
        sum+=i;
        cnt++;
        if(sum<=0){
            cnt-=1;
            break;
        }
    }
    return cnt>0?cnt:-1;
}
int main(){
    ll n;
    cin>>n;
    vector<ll>A(n),B(n),C(n);
    rep(i,n)cin>>A[i];
    rep(i,n)cin>>B[i];
    rep(i,n)cin>>C[i];
    vector<ll>cw(n),cs(n),cu(n);
    rep(i,n){
        cw[i]=A[i]-B[i]-C[i];
        cs[i]=B[i]-A[i]-C[i];
        cu[i]=C[i]-A[i]-B[i];
    }
    ll w=maxeven(cw),s=maxeven(cs),u=maxeven(cu);
    ll ans=max({w,s,u});
    cout<<(ans==-1?-1:ans);
    return 0;
}
