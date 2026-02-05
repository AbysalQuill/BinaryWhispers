#include <bits/stdc++.h>
using namespace std;
int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool leap(int y) {
	return (y%4==0 && y%100!=0|| y%400==0); 
}
int main(){
	int a,b,c;
	scanf("%d/%d/%d",&a,&b,&c);
	for (int year=1960;year<=2059;year++){
		if (leap(year)) months[2]=29;
		else months[2]=28;
		for (int mon=1;mon<=12;mon++){
			for (int day=1;day<=months[mon];day++){
				if (a==year%100&&b==mon&&c==day|| a==day&&b==mon&&c==year%100|| a==mon&&b==day&&c==year%100){
					printf("%d-%02d-%02d\n",year,mon,day);
				}
			}

		}
	}
	return 0;
}


