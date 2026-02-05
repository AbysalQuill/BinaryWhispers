#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ans;
    cin>>s;
    for (int i=0;i<s.size();){
        if (i+1<s.size()){
            int x=(s[i]-'0')*10+s[i+1]-'0';
            if (x<=26){
                ans+='A'+x-1;
                i+=2;
                continue;
            }
        }
        ans+='A'+s[i]-'0'-1;
        i++;
    }
    cout<<ans;
    return 0;
}