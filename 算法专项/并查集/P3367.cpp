#include <bits/stdc++.h>
using namespace std;
class DSU{
private:
    vector<int> fa;
public:
    void init(int n){
        for(int i=1;i<=n;i++){
            fa[i]=i;
        }
    }
    int find(int x){
        return x==fa[x]?x:(fa[x]=find(fa[x]));
    }
    void unity(int x, int y){
        int fx=find(x),fy=find(y);
        if(fx==fy)return;
        fa[fx]=fy;
    }
    bool isSame(int x, int y){
        return find(x) == find(y);
    }
    DSU(int n){
        fa=vector<int>(n+1);
        init(n);
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    DSU dsu(n);
    for(int i=0;i<m;i++){
        int z,x, y;
        cin>>z>>x>>y;
        if(z==1){
            dsu.unity(x,y);
        }else{
            if(dsu.isSame(x,y)){
                cout<<"Y"<<endl;
            }else{
                cout<<"N"<<endl;
            }
        }
    }
    return 0;
}