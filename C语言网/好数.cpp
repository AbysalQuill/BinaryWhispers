#include <bits/stdc++.h>
using namespace std;
bool isGood(int num){
    int pos=1;
    while(num>0){
        int digit=num%10;
        if (pos%2==1){
            if(digit%2==0) return false;
        }
        else {
            if(digit%2!=0) return false;
        }
        num/=10;
        pos++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(isGood(i)) count++;
    }
    cout<<count;
    return 0;
}