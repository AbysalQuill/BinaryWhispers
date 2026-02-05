#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){   
        string s=to_string(i);
        bool c2=count(s.begin(),s.end(),'2');
        bool c0=count(s.begin(),s.end(),'0');
        bool c1=count(s.begin(),s.end(),'1');
        bool c9=count(s.begin(),s.end(),'9');
        if (c1||c0||c2||c9) sum+=i;
    }
    cout<<sum;
}