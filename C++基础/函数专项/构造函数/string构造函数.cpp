#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"默认构造函数"<<endl;
    string s1;
    cout<<s1<<endl;

    cout<<"带参数构造函数"<<endl;
    string s2("hello world");
    cout<<s2<<endl;

    cout<<"字符数组构造函数"<<endl;
    char arr[]="hello world";
    string s3(arr);
    cout<<s3<<endl;

    cout<<"字符数组构造函数"<<endl;
    string s4(arr,5);
    cout<<s4<<endl;

    cout<<"迭代器构造函数"<<endl;
    string s5(s4.begin(),s4.end());
    cout<<s5<<endl;

    cout<<"复制构造函数"<<endl;
    string s6(s5);
    cout<<s6<<endl;

    cout<<"赋值运算符"<<endl;
    string s7;
    s7=s6;
    cout<<s7<<endl;

    cout<<"字符串拼接"<<endl;
    string s8=s7+s6;
    cout<<s8<<endl;

    cout<<"字符串比较"<<endl;
    if(s7==s6)
        cout<<"相等"<<endl;
        else
            cout<<"不相等"<<endl;

    cout<<"字符串大小"<<endl;
    cout<<s7.size()<<endl;

    cout<<"字符串长度"<<endl;
    cout<<s7.length()<<endl;

    cout<<"字符串查找"<<endl;
    cout<<s7.find("hello")<<endl;

    cout<<"字符串替换"<<endl;
    s7.replace(0,5,"world");//替换从0开始5个字符
    cout<<s7<<endl;

    cout<<"字符串插入"<<endl;
    s7.insert(0,"hello");
    cout<<s7<<endl;

    cout<<"字符串删除"<<endl;
    s7.erase(0,5);//删除从0开始5个字符
    cout<<s7<<endl;

    cout<<"字符串截取"<<endl;
    cout<<s7.substr(0,5)<<endl;

    cout<<"字符串反转"<<endl;
    reverse(s7.begin(),s7.end());
    cout<<s7<<endl;

    cout<<"字符串排序"<<endl;
    sort(s7.begin(),s7.end());//按照字典序升序
    cout<<s7<<endl;

    cout<<"字符串去重"<<endl;
    s7.erase(unique(s7.begin(),s7.end()),s7.end());
    cout<<s7<<endl;
}