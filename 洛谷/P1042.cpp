#include <iostream>
#include <string>
using namespace std;

string s;
char c;

void work(int n) {
    int a = 0, b = 0;
    for (char ch : s) {
        if (ch == 'W') a++;
        else if (ch == 'L') b++;
        if ((a >= n || b >= n) && abs(a-b) >= 2) {
            cout << a << ":" << b << endl;
            a = 0;
            b = 0;
        }
    }
    cout << a << ":" << b << endl << endl;
}

int main(){
    ios::sync_with_stdio(false);
    while(cin >> c && c != 'E') 
        s += c;
    work(11);
    work(21);
    return 0;
}