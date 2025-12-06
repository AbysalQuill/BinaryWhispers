#include <bits/stdc++.h>
using namespace std;
vector<int> multiply(vector<int>a,vector<int>b){
    vector<int>res=vector<int>(a.size()+b.size(),0);
    for (int i=0;i<a.size();i++){
        int carry=0;
        for (int j=0;j<b.size()||carry;j++){
            if (j<b.size()) carry+=a[i]*b[j]+res[i+j];
            else carry+=res[i+j];
            res[i+j]=carry%10;
            carry/=10;
        }
    }
    while (res.size()>1&&res.back()==0)
        res.pop_back();
    return res;
}

int main(){
    string a,b;
    cin>>a>>b;
    vector<int>a_num,b_num;
    for (int i=a.size()-1;i>=0;i--)
        a_num.push_back(a[i]-'0');
    for (int i=b.size()-1;i>=0;i--)
        b_num.push_back(b[i]-'0');
    vector<int>res=multiply(a_num,b_num);
    for (int i=res.size()-1;i>=0;i--)
        cout<<res[i];
    return 0;
}