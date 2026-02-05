#include<bits/stdc++.h>
#define rep(i,x,n) for(int i=x;i<=n;i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>a(n+1),s(n+1);
    s[0]=0;
    rep(i,1,n) {
        cin>>a[i];
        s[i]=a[i]+s[i-1];
    }
    int m,l,r;
    cin>>m;
    rep(i,1,m){
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl;
    }
    return 0;
}