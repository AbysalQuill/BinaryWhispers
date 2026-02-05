#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
    int n,m;
    cin>>n>>m;
    int stu=0,cnt=0;
    rep(i,n){
        int r,c;
        cin>>r>>c;
        stu+=r*c;
        cnt++;
        if (stu>=m) break;
    }
    int person=2*cnt;
    cout<<person;
}