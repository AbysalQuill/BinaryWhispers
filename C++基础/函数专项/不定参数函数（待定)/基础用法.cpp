#include <iostream>
#include <cstdarg>
#include <vector>
using namespace std;
int  sum(int a,...){
    int total=0;
    va_list args;   // 定义一个va_list类型的变量
    va_start(args,a);   // 初始化变量
    for (int i=0;i<a;i++)
        total+=va_arg(args,int);
        va_end(args);   // 释放内存，结束变量
        return total;
}

int main(){
    int n;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    }
}
