#include <bits/stdc++.h>
using namespace std;
string subtruct(string a,string b){
    string result="";
    int borrow=0;
    for (int i=a.size()-1,j=b.size()-1;i>=0||j>=0;i--,j--){
        int x=i<0?0:a[i]-'0';
        int y=j<0?0:b[j]-'0';
        x-=borrow;
        if (x<y){
            x+=10;
            borrow=1;
        }     
        else borrow=0;
        result+=(x-y)+'0';
        }
        while (result.size()>1&&result[result.size()-1]=='0')
            result.erase(result.size()-1);                                                                               
    }
int main(){
    string a,b;
    cin>>a>>b;
    cout<<subtruct(a,b);
    return 0;
}