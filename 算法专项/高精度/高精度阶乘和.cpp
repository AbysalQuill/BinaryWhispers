#include <bits/stdc++.h>
using namespace std;

int n, res[10010]; // res仍全局（需存储乘法/加法结果），a、b改为局部

// 大整数加法：x + y
string add(string x, string y) {
    string ans = "";
    int len1 = x.size(), len2 = y.size(), lenm = max(len1, len2) + 1;
    
    // 修复1：a、b改为局部数组，避免全局污染
    int a[10010] = {0}, b[10010] = {0};
    // 修复2：每次加法前清空res数组，避免残留
    memset(res, 0, sizeof(res));
    
    // 字符串逆序存入数组（1号位对应个位）
    for (int i = 0; i < len1; i++) a[len1 - i] = x[i] - '0';
    for (int i = 0; i < len2; i++) b[len2 - i] = y[i] - '0';
    
    // 逐位相加+处理进位
    for (int i = 1; i < lenm; i++) {
        res[i] = a[i] + b[i];
        res[i + 1] += res[i] / 10;
        res[i] %= 10;
    }
    
    // 去除前导零（修正索引越界风险，逻辑不变）
    while (res[lenm] == 0 && lenm > 1) lenm--;
    
    // 拼接结果（从高位到个位）
    for (int i = lenm; i >= 1; i--) ans += res[i] + '0';
    return ans;
}

// 大整数乘法：x * y
string multiply(string x, string y) {
    string ans = "";
    int len1 = x.size(), len2 = y.size();
    // 修复3：乘法结果最大位数是len1+len2，初始len设为该值
    int len = len1 + len2;
    
    // 修复1：a、b改为局部数组
    int a[10010] = {0}, b[10010] = {0};
    // 修复4：每次乘法前清空res数组
    memset(res, 0, sizeof(res));
    
    // 字符串逆序存入数组（0号位对应个位，乘法常用写法）
    for (int i = 0; i < len1; i++) a[i] = x[len1 - 1 - i] - '0';
    for (int i = 0; i < len2; i++) b[i] = y[len2 - 1 - i] - '0';
    
    // 逐位相乘+处理进位
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            res[i + j] += a[i] * b[j];
            res[i + j + 1] += res[i + j] / 10;
            res[i + j] %= 10;
        }
    }
    
    // 修复5：修正越界判断，判断res[len-1]（最高位）是否为0
    while (len > 1 && res[len - 1] == 0) len--;
    
    // 修复6：拼接顺序改为从最高位到个位（len-1 → 0）
    for (int i = len - 1; i >= 0; i--) ans += res[i] + '0';
    return ans;
}

int main() {
    cin >> n;
    string fact = "1", sum = "0"; // fact初始为1!，sum初始为0
    for (int i = 1; i <= n; i++) {
        fact = multiply(fact, to_string(i));
        sum = add(sum, fact);
    }
    cout << sum << endl;
    return 0;
}