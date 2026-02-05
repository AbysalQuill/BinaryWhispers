#include <bits/stdc++.h>
using namespace std;

struct point{
    int id;
    int x;
    int y;
};

int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};

    vector<string>s={"hello","world","apple","banana"};

    vector<point>pts={{1,1,2},{2,3,4},{3,5,6},{4,7,8},{5,9,10}};



    cout<<"普通数组排序："<<endl;

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    sort(a,a+10);
    for (int i:a) cout<<i<<" ";
    cout<<endl;



    cout<<"vector排序："<<endl;

    cout<<"升序："<<endl;
    sort(v.begin(),v.end());
    for (int i:v) cout<<i<<" ";
    cout<<endl; 



    cout<<"降序："<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for (int i:v) cout<<i<<" ";
    cout<<endl;



    cout<<"lambda降序："<<endl;
    sort(v.begin(),v.end(),[](int a,int b){return a>b;});
    for (int i:v) cout<<i<<" ";
    cout<<endl;



    cout<<"偶数在前，奇数在后，升序："<<endl;
    sort(v.begin(),v.end(),[](int a,int b){return a%2==b%2?a<b:a%2<b%2;});
    for (int i:v) cout<<i<<" ";
    cout<<endl;



    cout<<"奇数在前，偶数在后，升序："<<endl;
    sort(v.begin(),v.end(),[](int a,int b){return a%2==b%2?a<b:a%2>b%2;});
    for (int i:v) cout<<i<<" ";
    cout<<endl;

    
    
    cout<<"字典序升序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a.size()==b.size()?a<b:a.size()<b.size();});
    for (string i:s) cout<<i<<" ";
    cout<<endl;



    cout<<"字典序降序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a.size()==b.size()?a>b:a.size()>b.size();});
    for (string i:s) cout<<i<<" ";
    cout<<endl;

    

    cout<<"拼数字典序升序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a+b<b+a;});
    for (string i:s) cout<<i<<" ";
    cout<<endl;

    

    cout<<"拼数字典序降序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a+b>b+a;});
    for (string i:s) cout<<i<<" ";
    cout<<endl;

    

    cout<<"自定义结构体排序："<<endl;

    cout<<"按照x升序："<<endl;
    sort(pts.begin(),pts.end(),[](point a,point b){return a.x<b.x;});
    for (point i:pts) cout<<i.x<<" "<<i.y<<endl;
    cout<<endl;



    cout<<"按照x升序，y降序："<<endl;
    sort(pts.begin(),pts.end(),[](point a,point b)
    {return a.x<b.x||(a.x==b.x&&a.y>b.y);});
    for (point i:pts) cout<<i.x<<" "<<i.y<<endl;
    cout<<endl;


    
    cout<<"按照id降序，x降序，y升序："<<endl;
    sort(pts.begin(),pts.end(),[](point a,point b)
    {return a.id>b.id||(a.id==b.id&&a.x>b.x)||(a.id==b.id&&a.x==b.x&&a.y<b.y);});
    for (point i:pts) cout<<i.x<<" "<<i.y<<endl;
    cout<<endl;
}