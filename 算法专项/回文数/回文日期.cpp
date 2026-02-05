#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int months[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool isPalindrome(string s) {
    string t=s;
    reverse(t.begin(),t.end());
    return s==t;
}
bool isValid(int date){
    int year,month,day;
    year=date/10000;
    month=(date%10000)/100;
    day=date%100;
    if (day==0||month<=0||month>12) return false;
    if (month!=2&&day>months[month]) return false;
    if (month==2){
        if ((year%4==0&&year%100!=0)||year%400==0){
            if (day>29) return false;
        }
        else{
            if (day>28) return false;
        }
    }
    return true;
}
bool isABABBABA(string s){
    if (isPalindrome(s)){
        if(s[0]==s[1]||s[0]!=s[2]||s[1]!=s[3]) return false;
        return true;
    }
    return false;
}

int main(){
    bool first=true;
    int num;
    cin>>num;
    for (int i=num+1;;i++){
        if (isValid(i)){
            string s=to_string(i);
            if (first&&isPalindrome(s)){
                cout<<s<<endl;
                first=false;
            }
            if (isABABBABA(s)){
                cout<<s<<endl;
                break;
            }
        }
    }
    return 0;
}




