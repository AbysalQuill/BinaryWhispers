#include <bits/stdc++.h>
using namespace std;
string rightshift(string num){
    string result="";
    int carry=0;
    for (long i=0;i<num.length();i++)
    {
        int cur=carry*10+(num[i]-'0');
        result+=to_string(cur/2);
        carry=cur%2;
    }
    while (result.length()>1&&result[0]=='0') result.erase(0,1);

    return result.empty()?"0":result;
}

int main(){
    string a;
    cin>>a;
    cout<<rightshift(a)<<endl;
}