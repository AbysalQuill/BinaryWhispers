#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll=long long;

struct person{
    int id,time;
    bool operator<(const person &a) const{
        return time<a.time;
    }
};
int main(){
    int n;
    cin>>n;
    vector<person> p(n);
    rep(i,n){
        cin>>p[i].time;
        p[i].id=i+1;
    }
    sort(p.begin(),p.end());
    rep(i,n) cout<<p[i].id<<" ";
    cout<<endl;
    ll total=0;
    int cur=0;
    rep(i,n){
        total+=cur;
        cur+=p[i].time;
    }
    double avg=1.0*total/n;
    cout<<fixed<<setprecision(2)<<avg;
    return 0;
}