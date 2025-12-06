#include <bits/stdc++.h>
using namespace std;
bool isZero(const string&num){
    for (char c:num) if(c!='0') return false;
    return true;
}
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
        reverse(result.begin(), result.end());
        while (result.size()>1&&result[0]=='0') result.erase(0,1);
        return result;
}
string multiply(string num1, string num2){
    int len1=num1.size();
    int len2=num2.size();
    vector<int> result(len1+len2,0);
    for (int i=len1-1;i>=0;i--){
        for (int j=len2-1;j>= 0;j--){
            int mul=(num1[i]-'0')*(num2[j]-'0');
            int next=i+j;
            int curr=i+j+1;
            int sum=mul+result[curr];
            result[curr]=sum%10;
            result[next]+=sum/10;
        }
    }
    string str="";
    for (int i=0;i<result.size();i++)
        if (!(str.empty()&&result[i]==0))
            str.push_back(result[i]+'0');
    return str.empty()?"0":str;
}
string quickPow(string a,string b){
    string result="1";
    while (!isZero(b)){
        if ((b.back()-'0')&1) result=multiply(result,a);
        a=multiply(a,a);
        b=rightshift(b);
    }
    return result;
}

int length(string num){
    return num.length();
}
string getDigits(string num){
    if (num.length()<=500)
        return string(500-num.length(),'0') + num;
    else 
        return num.substr(num.length()-500);
}
void printBreak(string str, int charsPerLine) {
    for (int i=0;i<str.length(); i++){
        cout << str[i];
        if ((i + 1)%charsPerLine==0) 
            cout<<endl;
    }
}

int main(){
    string p;
    cin>>p;
    string result=subtruct(quickPow("2",p),"1");
    cout<<length(result)<<endl;
    string digits=getDigits(result);
    printBreak(digits,50);
    return 0;
}