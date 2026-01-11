#include<bits/stdc++.h>
using namespace std;
string multiply(string a, string b){
    vector<int> result(a.size()+b.size(), 0);
    for (int i=a.size()-1; i>=0; i--){
        for (int j=b.size()-1; j>=0; j--){
            int tmp=(a[i]-'0')*(b[j]-'0');
            int sum=tmp+result[i+j+1];
            result[i+j+1]=sum%10;
            result[i+j]+=sum/10;
        }
    }
    string str="";
    for (int i=0; i<result.size(); i++){
        if (!(str.empty() && result[i]==0))
            str.push_back(result[i]+'0');
    }
    return str.empty()?"0":str;
}
string factorial(int n){
    string result = "1";
    for(int i=1; i<=n; i++) result = multiply(result, to_string(i));
    return result;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        char digit;
        cin>>n>>digit;
        string fact=factorial(n);
        int count=0;
        for(int i=0;i<fact.size();i++){
            if(fact[i]==digit) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}