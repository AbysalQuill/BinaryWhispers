#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1={1,2,3,4,5};
    v1.data()[0]=10;
    for (int i:v1){
        cout<<i<<" ";
    }}