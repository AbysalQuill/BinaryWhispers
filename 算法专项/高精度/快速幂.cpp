#include <bits/stdc++.h>
using namespace std;
unsigned long long quickPow(long long b,long long p){
    unsigned long long res=1;
    while (p)
    {
        if (p&1) res*=b;
        b*=b;
        p>>=1;
    }
    return res;
}
int main(){
    long long b,p;
    cin>>b>>p;
    cout<<quickPow(b,p)<<endl;
    return 0;
}