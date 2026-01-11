#include<bits/stdc++.h>
using namespace std;
string multiply(string a,string b){
    vector<int> result(a.size()+b.size(),0);
    for (int i=a.size()-1;i>=0;i--){
        for (int j=b.size()-1;j>=0;j--){
            int tmp=(a[i]-'0')*(b[j]-'0');
            int sum=tmp+result[i+j+1];
            result[i+j+1]=sum%10;
            result[i+j]+=sum/10;
        }
    }
    string ans="";
    for (int i=0;i<result.size();i++) ans+=result[i]+'0';
    while (ans[0]=='0'&&ans.size()>1) ans.erase(0,1);
    return ans;
}

string fact(int n){
    string fact="1";
    for(int i=1;i<=n;i++) fact=multiply(fact,to_string(i));
    return fact;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}