#include <bits/stdc++.h>
using namespace std;
string multiply(string num1,string num2){
    int len1=num1.size();
    int len2=num2.size();
    vector<int> result(len1+len2,0);
    for (int i=len1-1;i>=0;i--){
        for (int j=len2-1;j>=0;j--){
            int mul=(num1[i]-'0')*(num2[j]-'0');
            int next=i+j;
            int curr=i+j+1;
            int sum=mul+result[curr];
            result[curr]=sum%10;
            result[next]+=sum/10;
        }
    }
    string str="";
    for (int i=0;i<result.size();i++){
        if (!(str.empty()&&result[i]==0))
            str.push_back(result[i]+'0');
    }
    return str.empty()?"0":str;
} int main(){
    string a,b;
    cin>>a>>b;
    cout<<multiply(a,b)<<endl;
    return 0;
}