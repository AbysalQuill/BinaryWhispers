#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> t(n);
    rep(i,n){
        cin>>t[i].first;
        t[i].second=i+1;
    }
    sort(t.begin(),t.end());
    rep(i,n){
        if(i>0) cout<<" ";
        cout<<t[i].second;
    }
    cout<<endl;
    ll total=0;
    int cur=0;
    rep(i,n){
        total+=cur;
        cur+=t[i].first;
    }
    double avg=(double)total/n;
    cout<<fixed<<setprecision(2)<<avg;
    return 0;
}