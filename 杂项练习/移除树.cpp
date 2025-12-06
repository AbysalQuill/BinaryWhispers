#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,l;
    cin>>l>>m;
    vector<bool>trees(l+1,false);
    for (int i=0;i<m;i++){
        int v,u;
        cin>>v>>u;
        for (int j=v;j<=u;j++){
            trees[j]=true;
        }
    }

    int count=0;
    for (bool removedTrees:trees){
        if (!removedTrees){
            count++;
        }
    }
    cout<<count;
    return 0;
}
