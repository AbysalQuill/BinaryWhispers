#include <bits/stdc++.h>
using namespace std;

// 使用折叠表达式的模板函数示例
template<typename... Args>
auto sum(Args... args){
    return (args + ...);
}

int main(){
    // 调用使用右折叠表达式的函数
    //计算1 + (2 + (3 + (4 + 5)))
    cout << sum(1, 2, 3, 4, 5) << endl;
    return 0;
}