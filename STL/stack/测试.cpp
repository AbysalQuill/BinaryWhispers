#include <bits/stdc++.h>
using namespace std;
typedef struct student{
    string name;
    int rank;
    bool gender;
}student;
int main(){
    int n;
    cin>>n;
    vector<student>stu(n);
    for(int i=1;i<=n;i++) 
    stu[i].rank=i;
    for(int i=0;i<n;i++) 
    cin>>stu[i].gender>>stu[i].name;
    vector<student>boy,girl;
    for(int i=0;i<n;i++){
    if(stu[i].gender) boy.push_back(stu[i]);
    else girl.push_back(stu[i]);
    }
    sort(boy.begin(),boy.end(),[](student a,student b){return a.rank<b.rank;});
    sort(girl.begin(),girl.end(),[](student a,student b){return a.rank>b.rank;});
    for(int i=0;i<boy.size();i++){
        
    }


}