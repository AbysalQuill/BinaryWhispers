#include <iostream>
using namespace std;
string reverse(string s)
{
    string res="";
    for(int i=s.size()-1;i>=0;i--) res += s[i];
    return res;
}
int main(){
    string a;
    cin>>a;
    cout<<reverse(a);
    return 0;
}