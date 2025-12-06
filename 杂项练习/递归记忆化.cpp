#include <bits/stdc++.h>
using namespace std;

long long *momo; // 将momo声明为全局指针，以便在fib函数中访问

int fib(int n)
{   
    if(n==0) return 0;
    if (n==1||n==2) return 1;
    if(momo[n]!=0) return momo[n]; // 如果已经计算过，直接返回结果
    momo[n]=fib(n-1)+fib(n-2); // 计算并存储结果
    return momo[n];
}

int main(){
    int n;
    cin>>n;
    momo=new long long[n+1]; // 在全局指针上分配内存
    memset(momo, 0, sizeof(long long) * (n+1)); // 初始化数组为0
    cout<<fib(n)<<endl;
    delete[] momo; // 释放内存
    return 0;
}