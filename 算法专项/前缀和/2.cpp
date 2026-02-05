#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int a1,a2,a3,a4,a5;
	cin>>a1>>a2>>a3>>a4>>a5;
	int s=a1+a2+a3+a4+a5;
	if(s<=99) cout<<"Grey";
	else if(s<=119) cout<<"Blue";
	else if(s<=169) cout<<"Green";
	else if(s<=229) cout<<"Qrange";
	else cout<<"Red";
	return 0;
}
