#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=2,s=0,t=0;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		t=t*10+a;
		s+=t;
	}
	cout<<s;
	return 0;	
}
