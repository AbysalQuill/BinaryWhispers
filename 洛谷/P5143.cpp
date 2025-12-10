#include <bits/stdc++.h>
using namespace std;
//爬山类问题，要分段，因为人不能直接飞
struct point {double x, y, z;};
double distance(const point& a,const point& b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}
int main(){
    int n;
    cin>>n;
    vector<point> p(n);
    for (int i=0;i<n;i++) cin>>p[i].x>>p[i].y>>p[i].z;
    sort(p.begin(),p.end(),[](const point& a,const point& b){return a.z<b.z;});
    double s=0;
    for (int i=1;i<n;i++) s+=distance(p[i-1], p[i]);
    cout<<fixed<<setprecision(3)<<s<<endl;
    return 0;
}