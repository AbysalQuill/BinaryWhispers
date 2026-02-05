#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int s=0,cnt=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if (!(a%3==0||a%10==3)){
			cnt++;
		}
		if (a%3==0||a%10==3) {
			a=0;
		}
		s+=a;
	}
	cout<<s<<" "<<cnt<<endl;
}