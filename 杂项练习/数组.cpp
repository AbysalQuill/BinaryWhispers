#include <iostream>
using namespace std;
int main()
{   int sum=0,avr=0,i;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int min=a[0];
    for (i=0;i<10;i++){
        sum=sum+a[i];
    }
    for (i=0;i<10;i++){
        if (a[i]<min){
            min=a[i];
        }

    }
    cout<<"min="<<min<<endl;
    cout<<"sum="<<sum<<endl;
    avr=sum/10;
    cout<<"avr="<<avr<<endl;
    return 0;

    }