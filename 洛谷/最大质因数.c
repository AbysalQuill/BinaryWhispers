#include <stdio.h>
#include <math.h>
int main(){
    int n,maxprime;
    scanf("%d",&n);
    while (n%2==0){
        maxprime=2;
        n/=2;
    }
    for (int i=3;i<=sqrt(n);i+=2){
        while (n%i==0){
            maxprime=i;
            n/=i;
        }
    }
    if (n>2) maxprime=n;
        printf("%d",maxprime);
    }