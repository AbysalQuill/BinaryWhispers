#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;++i)
int main() {
    int n;
    cin>>n;
    int k=n/10;
    vector<vector<int>> cost(10);
    rep(i,n){
        int a,b;
        cin>>a>>b;
        cost[a].push_back(b);
    }
    ll total=0;
    rep(i,10){
        int spend=cost[i].size()-k;
        if (spend>0){
            sort(cost[i].begin(),cost[i].end());
            rep(j,spend) total+=cost[i][j];
        }
    }
    cout<<total;
    return 0;
}