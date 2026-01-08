#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<string> ans;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt=0;
        for (int i=0; i<n;++i) {
            cin>>a[i];
            if (a[i]==0) {
                cnt++;
            }
        }
        if (cnt==0||cnt%2==0) {
            ans.push_back("Alice");
        } else {
            ans.push_back("Bob");
        }
    }
    for (const string& res:ans) {
        cout<<res<<'\n';
    }
    return 0;
}