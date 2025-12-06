#include <iostream>
#include <vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myVector = {1,2,3,4,5,6,7,8,9};
    cout << "原始数组为: "<<endl;
    for (int i:myVector){
        cout<<i<<" ";
    }
    cout << endl;
    
    //修改指定的3个位置元素(例如位置1, 3, 5)
    myVector[1] = 67;
    myVector[3] = 67;
    myVector[5] = 67;
    
    cout << "修改后的数组为: "<<endl;
    for (int i:myVector){
        cout<<i<<" ";
    }
    cout << endl;
    
    //另一种方式：使用迭代器修改3个位置的元素
    vector<int> myVector2 = {1,2,3,4,5,6,7,8,9};
    cout << "原始数组2为: "<<endl;
    for (int i:myVector2){
        cout<<i<<" ";
    }
    cout << endl;
    
    //使用迭代器修改指定位置元素
    auto it1 = myVector2.begin();
    advance(it1, 1);
    *it1 = 57;
    
    auto it2 = myVector2.begin();
    advance(it2, 3);
    *it2 = 57;
    
    auto it3 = myVector2.begin();
    advance(it3, 5);
    *it3 = 57;
    
    cout << "修改后的数组2为: "<<endl;
    for (int i:myVector2){
        cout<<i<<" ";
    }
    cout << endl;
    return 0;
}