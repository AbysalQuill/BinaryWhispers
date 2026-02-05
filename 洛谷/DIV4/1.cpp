#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int findNum(int g[4][4]) {
    int x=-1;
    rep(i,4){
        rep(j,4){
            if (g[i][j]==0) {
                x=i;
                goto found;
            }
        }
    }
    found:
    bool has[5]={false};
    rep(j,4) has[g[x][j]]=true;
    rep(n,4){
        int num=n+1;
        if (!has[num]) return num;
    }
    return -1;
}
int main() {
    int g[4][4];
    rep(i,4) rep(j,4) cin>>g[i][j];
    cout<<findNum(g)<<endl;
    return 0;
}