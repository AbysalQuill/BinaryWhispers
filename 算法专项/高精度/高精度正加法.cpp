#include <bits/stdc++.h>
using namespace std;
string add(string a,string b){
    string result="";
    int carry=0;
    for (int i=a.size()-1,j=b.size()-1;i>=0||j>=0||carry;i--,j--){
        int x=(i<0)?0:a[i]-'0';
        int y=(j<0)?0:b[j]-'0';
        int tmp=x+y+carry;
        result+=(tmp%10+'0');
        carry=tmp/10;
    }
    reverse(result.begin(),result.end());
    while (result[0]=='0'&&result.size()>1) result.erase(result.begin());
    return result;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}