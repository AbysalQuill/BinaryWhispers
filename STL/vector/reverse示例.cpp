#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    /*vector<string> v1 = {"apple", "orange", "banana"};
    vector<string> v2 = {"ABCDEFG"};
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    for (string i:v1){
        cout<<i<<" ";
    }
    for (string i:v2){
        cout<<i<<" ";
    }*/
string v3 = "abandon";
vector<string> chars;
for (char c : v3) {
    chars.push_back(string(1, c));
}
reverse(chars.begin(), chars.end());
for (string i : chars) {
    cout << i;
}

}