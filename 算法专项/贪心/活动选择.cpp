#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;

struct Activity
{
    int start, end;
};
int main(){
    int n;
    cin>>n;
    vector<Activity> a(n);
    rep(i,n) cin>>a[i].start>>a[i].end;
    sort(a.begin(),a.end(),[](Activity a,Activity b){return a.end<b.end;});
    int lst=0,cnt=0;
    for (auto act:a){
        if (act.start>=lst){
            cnt++;
            lst=act.end;
        }
    }
    cout<<cnt;
    return 0;
}