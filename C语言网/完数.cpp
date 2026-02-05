#include <bits/stdc++.h>
using namespace std;
int pernum(int n){
    int s=0;
    for (int i=1;i<n;i++){
        if (n%i==0)
        s+=i;
    }
    return s==n;
}
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        if (pernum(i)){
            cout<<i<<" its factors are ";
            int first=1;
            for (int j=1;j<i;j++) {
                if (i%j==0){
                    if (!first) cout<<" ";
                    cout<<j;
                    first=0;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}