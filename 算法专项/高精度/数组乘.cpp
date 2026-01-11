#include <bits/stdc++.h>
using namespace std;
#define N 1000
int a[N],b[N],c[N];
string multiply(string a,string b){
    memset(c,0,sizeof(c));
    int lena=a.size(),lenb=b.size();
    for (int i=lena-1;i>=0;i--){
        for (int j=lenb-1;j>=0;j--){
        int tmp=(a[i]-'0')*(b[j]-'0');
        int sum=tmp+c[i+j+1];
        c[i+j+1]=sum%10;
        c[i+j]+=sum/10;
        }
    }
    string res="";
    for(int i=0;i<lena+lenb;i++) res+=(c[i]+'0');
    while(res.size()>1&&res[0]=='0') res.erase(res.begin());
    return res;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<multiply(a,b)<<endl;
    return 0;
}