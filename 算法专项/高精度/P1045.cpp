#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int p;
int a[N],b[N],tmp[N];
void bmula()
{
  int tmp[1010]={0};
  for(int i=0;i<500;i++)
	for(int j=0;j<500;j++)
	  tmp[i+j]+=b[i]*a[j];
  int t=0;
  for(int i=0;i<500;i++)
  {
	tmp[i]+=t;
	b[i]=tmp[i]%10;
	t=tmp[i]/10;
  }
  return;
}
void amula()
{
  int tmp[1010]={0};
  for(int i=0;i<500;i++)
	for(int j=0;j<500;j++)
	  tmp[i+j]+=a[i]*a[j];
  int t=0;
  for(int i=0;i<500;i++)
  {
	tmp[i]+=t;
	a[i]=tmp[i]%10;
	t=tmp[i]/10;
  }
  return;
}
int main()
{
  cin>>p;
  cout<<(int)(log10(2)*p+1);
  b[0]=1,a[0]=2;
  while(p)
  {
    if(p%2==1)
      bmula();
    amula();
    p/=2;
  }
  b[0]--;
  for(int i=500-1;i>=0;i--)
  {
    if((i+1)%50==0)
	  cout<<endl;
    cout<<b[i];
  }
  return 0;
}
