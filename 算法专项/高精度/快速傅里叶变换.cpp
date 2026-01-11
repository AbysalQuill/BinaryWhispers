#include <bits/stdc++.h>
using namespace std;
using cd = complex<double>;
const double PI = acos(-1);
//位逆序置换
void bitReverse(vector<cd>& a){
    int n=a.size();
    for (int i=1, j=0; i<n;++i){
        int bit=n>>1;
        for (;j&bit;bit>>=1) j^=bit;
        j^=bit;
        if (i<j) swap(a[i],a[j]);
    }
}
// FFT核心：inv=0正变换，inv=1逆变换
//
void fft(vector<cd>& a, bool inv) {
    int n=a.size();
    bitReverse(a);
    for (int len=2;len<=n;len<<=1) {
        double ang=2*PI/len*(inv?-1:1);
        cd wlen(cos(ang),sin(ang));
        for (int i=0;i<n;i+=len) {
            cd w(1);
            int mid=len/2;
            for (int j=0;j<mid;++j) {
                cd u=a[i+j],v=a[i+j+mid]*w;
                a[i+j]=u+v;
                a[i+j+mid]=u-v;
                w*=wlen;
            }
        }
    }
    if (inv) for (cd& x:a) x/=n;
}
string mul(string s1, string s2) {
    //处理前导零
    s1.erase(0,s1.find_first_not_of('0'));
    s2.erase(0,s2.find_first_not_of('0'));
    if (s1.empty()) s1="0";
    if (s2.empty()) s2="0";
    //字符串逆序转系数数组（个位在前）
    vector<int> a, b;
    for (char c:s1) a.push_back(c-'0');
    for (char c:s2) b.push_back(c-'0');
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    //FFT预处理：长度补至2的幂
    int n=1;
    while (n<a.size()+b.size()) n<<=1;
    vector<cd> fa(a.begin(),a.end()),fb(b.begin(),b.end());
    fa.resize(n),fb.resize(n);
    // 正FFT→点值相乘→逆FFT
    fft(fa,0),fft(fb,0);
    for (int i=0; i<n;++i) fa[i]*=fb[i];
    fft(fa,1);
    // 取整+进位处理
    vector<int> res(n);
    for (int i=0;i<n;++i) res[i]=round(fa[i].real());
    int carry=0;
    for (int i=0;i<n;++i){
        int sum=res[i]+carry;
        res[i]=sum%10;
        carry=sum/10;
    }
    if (carry) res.push_back(carry); // 处理最后的进位
    // 去除前导零并逆序还原
    while (res.size()>1&&res.back()==0) res.pop_back();
    reverse(res.begin(),res.end());
    // 转字符串
    string ans;
    for (int x:res) ans+=(char)('0'+x);
    return ans;
}
int main() {
    string a,b;
    cin>>a>>b;
    cout<<mul(a,b)<<endl;
    return 0;
}