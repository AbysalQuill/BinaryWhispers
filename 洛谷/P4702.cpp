#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
    ll n,s=0;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    if (s&1) cout<<"Alice";
    else cout<<"Bob";
    return 0;
}