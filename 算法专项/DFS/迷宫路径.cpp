#include <bits/stdc++.h>
using namespace std;
/*  |_| |_| |_| |_|  
    |_| |_| |_| |_|
    |_| |_| |_| |_|
    |_| |_| |_| |_|
*/
//4x4迷宫
int arr[10][10];
void dfs(int x, int y,int k){
    arr[x][y]=k;
    if (y+1<4 && arr[x][y+1]==0){
        dfs(x,y+1,k+1);
    }
    if (x+1<4 && arr[x+1][y]==0){
        dfs(x+1,y,k+1);
    }
    if (y-1>=0 && arr[x][y-1]==0){
        dfs(x,y-1,k+1);
    }
    if (x-1>=0 && arr[x-1][y]==0){
        dfs(x-1,y,k+1);
    }
}

int main(){
    dfs(0,0,1);
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cout<<setw(5)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}